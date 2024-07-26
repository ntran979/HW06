#include "highInterestSavings.h"
#include <iostream>

highInterestSavings::highInterestSavings(const std::string& accName, int accNumber, double accBalance, double intRate, double minBalance)
    : savingsAccount(accName, accNumber, accBalance, intRate), minimumBalance(minBalance) {}

void highInterestSavings::printStatement() const {
    std::cout << "Account Holder: " << name << "\nAccount Number: " << accountNumber
              << "\nBalance: $" << balance << "\nInterest Rate: " << interestRate
              << "\nMinimum Balance: $" << minimumBalance << std::endl;
}
highInterestSavings::~highInterestSavings() {}