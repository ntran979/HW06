#include "noServiceChargeChecking.h"
#include <iostream>

noServiceChargeChecking::noServiceChargeChecking(const std::string& accName, int accNumber, double accBalance, double intRate, double minBalance)
    : checkingAccount(accName, accNumber, accBalance), interestRate(intRate), minimumBalance(minBalance) {}

double noServiceChargeChecking::getInterestRate() const {
    return interestRate;
}

double noServiceChargeChecking::getMinimumBalance() const {
    return minimumBalance;
}

void noServiceChargeChecking::writeCheck(double amount) {
    if (balance >= amount) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds." << std::endl;
    }
}

void noServiceChargeChecking::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds." << std::endl;
    }
}

void noServiceChargeChecking::printStatement() const {
    std::cout << "Account Holder: " << name << "\nAccount Number: " << accountNumber
              << "\nBalance: $" << balance << "\nInterest Rate: " << interestRate
              << "\nMinimum Balance: $" << minimumBalance << std::endl;
}
noServiceChargeChecking::~noServiceChargeChecking() {}