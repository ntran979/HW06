#include "checkingAccount.h"

// Constructor definition
checkingAccount::checkingAccount(const std::string& accName, int accNumber, double accBalance)
    : bankAccount(accName, accNumber, accBalance) {}

// Virtual destructor definition
checkingAccount::~checkingAccount() {}

// Define the virtual function writeCheck
void checkingAccount::writeCheck(double amount) {
    // Implementation of writeCheck (if any)
}
