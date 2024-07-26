#include "bankAccount.h"

bankAccount::bankAccount(const std::string& accName, int accNumber, double accBalance)
    : name(accName), accountNumber(accNumber), balance(accBalance) {}

void bankAccount::deposit(double amount) {
    balance += amount;
}

std::string bankAccount::getAccountName() const {
    return name;
}

int bankAccount::getAccountNumber() const {
    return accountNumber;
}

double bankAccount::getBalance() const {
    return balance;
}

bankAccount::~bankAccount() {}