#ifndef HIGHINTERESTSAVINGS_H
#define HIGHINTERESTSAVINGS_H

#include "savingsAccount.h"

class highInterestSavings : public savingsAccount {
public:
    highInterestSavings(const std::string& accName, int accNumber, double accBalance, double intRate, double minBalance);

    void printStatement() const;

    virtual ~highInterestSavings();

private:
    double minimumBalance;
};

#endif // HIGHINTERESTSAVINGS_H
