#include "certificateOfDeposit.h"
#include <iostream>

certificateOfDeposit::certificateOfDeposit(const std::string& accName, int accNumber, double accBalance, double intRate, int term)
    : bankAccount(accName, accNumber, accBalance), interestRate(intRate), termLength(term) {}

void certificateOfDeposit::withdraw(double amount) {
    std::cout << "Withdrawal not allowed for CD accounts." << std::endl;
}

void certificateOfDeposit::printStatement() const {
    std::cout << "Account Holder: " << name << "\nAccount Number: " << accountNumber
              << "\nBalance: $" << balance << "\nInterest Rate: " << interestRate
              << "\nTerm Length: " << termLength << " months" << std::endl;
}
certificateOfDeposit::~certificateOfDeposit() {}