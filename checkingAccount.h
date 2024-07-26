#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "bankAccount.h"

class checkingAccount : public bankAccount {
public:
    checkingAccount(const std::string& accName, int accNumber, double accBalance);
    
    // Declare virtual functions
    virtual void writeCheck(double amount);
    virtual ~checkingAccount();  // Virtual destructor
};

#endif // CHECKINGACCOUNT_H
