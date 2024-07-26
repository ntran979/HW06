#ifndef CERTIFICATEOFDISDEPOSIT_H
#define CERTIFICATEOFDISDEPOSIT_H

#include "bankAccount.h"

class certificateOfDeposit : public bankAccount {
public:
    certificateOfDeposit(const std::string& accName, int accNumber, double accBalance, double intRate, int term);

    void withdraw(double amount);
    void printStatement() const;

    virtual ~certificateOfDeposit();

private:
    double interestRate;
    int termLength;
};

#endif // CERTIFICATEOFDISDEPOSIT_H
