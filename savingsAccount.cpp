#include "savingsAccount.h"
#include <iostream>

savingsAccount::savingsAccount(const std::string& accName, int accNumber, double accBalance, double intRate)
    : bankAccount(accName, accNumber, accBalance), interestRate(intRate) {}

void savingsAccount::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds." << std::endl;
    }
}

void savingsAccount::printStatement() const {
    std::cout << "Account Holder: " << name << "\nAccount Number: " << accountNumber
              << "\nBalance: $" << balance << "\nInterest Rate: " << interestRate << std::endl;
}
savingsAccount::~savingsAccount() {}