#include "serviceChargeChecking.h"
#include <iostream>

serviceChargeChecking::serviceChargeChecking(const std::string& accName, int accNumber, double accBalance, double charge, int maxChks)
    : checkingAccount(accName, accNumber, accBalance), serviceCharge(charge), maxChecks(maxChks), checkCount(0) {}

void serviceChargeChecking::writeCheck(double amount) {
    if (checkCount < maxChecks) {
        if (balance >= amount) {
            balance -= amount;
            ++checkCount;
        } else {
            std::cout << "Insufficient funds." << std::endl;
        }
    } else {
        std::cout << "Check limit reached." << std::endl;
    }
}

void serviceChargeChecking::withdraw(double amount) {
    if (balance >= amount + serviceCharge) {
        balance -= (amount + serviceCharge);
    } else {
        std::cout << "Insufficient funds." << std::endl;
    }
}

void serviceChargeChecking::printStatement() const {
    std::cout << "Account Holder: " << name << "\nAccount Number: " << accountNumber
              << "\nBalance: $" << balance << "\nService Charge: $" << serviceCharge
              << "\nChecks Written: " << checkCount << "/" << maxChecks << std::endl;
}
serviceChargeChecking::~serviceChargeChecking() {}