#include <iostream>  // Include the necessary header
#include "highInterestChecking.h"

highInterestChecking::highInterestChecking(const std::string& accName, int accNumber, double accBalance, double intRate, double minBalance)
    : noServiceChargeChecking(accName, accNumber, accBalance, intRate, minBalance) {}

void highInterestChecking::printStatement() const {
    std::cout << "Balance: $" << getBalance()  // Use public getter for balance
              << "\nInterest Rate: " << getInterestRate()  // Use public getter for interestRate
              << "\nMinimum Balance: $" << getMinimumBalance()  // Use public getter for minimumBalance
              << std::endl;
}

highInterestChecking::~highInterestChecking() {}  // Destructor definition
