#ifndef HIGHINTERESTCHECKING_H
#define HIGHINTERESTCHECKING_H

#include "noServiceChargeChecking.h"

class highInterestChecking : public noServiceChargeChecking {
public:
    highInterestChecking(const std::string& accName, int accNumber, double accBalance, double intRate, double minBalance);

    void printStatement() const;

    virtual ~highInterestChecking();  // Destructor declaration
};

#endif // HIGHINTERESTCHECKING_H
