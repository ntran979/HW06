#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "bankAccount.h"

class savingsAccount : public bankAccount {
public:
    savingsAccount(const std::string& accName, int accNumber, double accBalance, double intRate);

    void withdraw(double amount);
    void printStatement() const;

    virtual ~savingsAccount();

protected:
    double interestRate;
};

#endif // SAVINGSACCOUNT_H
