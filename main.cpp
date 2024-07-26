#include <iostream>
#include <string>
#include "bankAccount.h"
#include "checkingAccount.h"
#include "serviceChargeChecking.h"
#include "noServiceChargeChecking.h"
#include "highInterestChecking.h"
#include "savingsAccount.h"
#include "highInterestSavings.h"
#include "certificateOfDeposit.h"

const int MAX_ACCOUNTS = 100;
bankAccount* accounts[MAX_ACCOUNTS];
int accountCount = 0;

void createNewAccount() {
    std::string name;
    int accountNumber;
    double balance;

    std::cout << "Enter account name: ";
    std::cin >> name;
    std::cout << "Enter account number: ";
    std::cin >> accountNumber;
    std::cout << "Enter initial balance: ";
    std::cin >> balance;

    if (accountCount < MAX_ACCOUNTS) {
        accounts[accountCount++] = new bankAccount(name, accountNumber, balance);
        std::cout << "Account created successfully.\n";
    } else {
        std::cout << "Account limit reached.\n";
    }
}

bankAccount* findAccount(const std::string& name) {
    for (int i = 0; i < accountCount; ++i) {
        if (accounts[i]->getAccountName() == name) {
            return accounts[i];
        }
    }
    std::cout << "Account not found.\n";
    return nullptr;
}

void handleAccount(bankAccount* account) {
    if (!account) return;

    int choice;
    do {
        std::cout << "1. Write a check\n";
        std::cout << "2. Manage savings account\n";
        std::cout << "3. Handle certificate of deposit\n";
        std::cout << "4. Exit program\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int checkType;
                std::cout << "1. No service charge check (limited to 3)\n";
                std::cout << "2. High interest check\n";
                std::cout << "3. Normal check\n";
                std::cout << "Enter your choice: ";
                std::cin >> checkType;

                double amount;
                std::cout << "Enter the amount to write: ";
                std::cin >> amount;

                switch (checkType) {
                    case 1:
                        dynamic_cast<noServiceChargeChecking*>(account)->writeCheck(amount);
                        break;
                    case 2:
                        dynamic_cast<highInterestChecking*>(account)->writeCheck(amount);
                        break;
                    case 3:
                        dynamic_cast<checkingAccount*>(account)->writeCheck(amount);
                        break;
                    default:
                        std::cout << "Invalid choice.\n";
                        break;
                }
                break;
            }
            case 2: {
                int savingsType;
                std::cout << "1. Normal savings account\n";
                std::cout << "2. High interest savings account\n";
                std::cout << "Enter your choice: ";
                std::cin >> savingsType;

                double amount;
                std::cout << "Enter the amount: ";
                std::cin >> amount;

                switch (savingsType) {
                    case 1:
                        dynamic_cast<savingsAccount*>(account)->withdraw(amount);
                        break;
                    case 2:
                        dynamic_cast<highInterestSavings*>(account)->withdraw(amount);
                        break;
                    default:
                        std::cout << "Invalid choice.\n";
                        break;
                }
                break;
            }
            case 3:
                std::cout << "Certificate of Deposit functionality not implemented.\n";
                break;
            case 4:
                std::cout << "Exiting.\n";
                break;
            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    } while (choice != 4);
}

int main() {
    int choice;
    do {
        std::cout << "1. Create a new bank account\n";
        std::cout << "2. Find an existing bank account\n";
        std::cout << "3. Exit the program\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                createNewAccount();
                break;
            case 2: {
                std::string name;
                std::cout << "Enter the account name to find: ";
                std::cin >> name;
                bankAccount* account = findAccount(name);
                handleAccount(account);
                break;
            }
            case 3:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    } while (choice != 3);

    // Clean up dynamically allocated memory
    for (int i = 0; i < accountCount; ++i) {
        delete accounts[i];
    }

    return 0;
}
