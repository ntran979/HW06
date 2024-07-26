#ifndef SERVICECHARGECHECKING_H
#define SERVICECHARGECHECKING_H

#include "checkingAccount.h"

class serviceChargeChecking : public checkingAccount {
public:
    serviceChargeChecking(const std::string& accName, int accNumber, double accBalance, double charge, int maxChks);

    void writeCheck(double amount);
    void withdraw(double amount);
    void printStatement() const;

    virtual ~serviceChargeChecking();

private:
    double serviceCharge;
    int maxChecks;
    int checkCount;
};

#endif // SERVICECHARGECHECKING_H
