#ifndef NOSERVICECHARGECHECKING_H
#define NOSERVICECHARGECHECKING_H

#include "checkingAccount.h"

class noServiceChargeChecking : public checkingAccount {
public:
    noServiceChargeChecking(const std::string& accName, int accNumber, double accBalance, double intRate, double minBalance);

    double getInterestRate() const;
    double getMinimumBalance() const;

    void writeCheck(double amount);
    void withdraw(double amount);
    void printStatement() const;

    virtual ~noServiceChargeChecking();
private:
    double interestRate;
    double minimumBalance;
};

#endif // NOSERVICECHARGECHECKING_H
