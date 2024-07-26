#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class bankAccount {
public:
    bankAccount(const std::string& accName, int accNumber, double accBalance);

    void deposit(double amount);
    std::string getAccountName() const;
    int getAccountNumber() const;
    double getBalance() const;

    virtual ~bankAccount();

protected:
    std::string name;
    int accountNumber;
    double balance;
};

#endif // BANKACCOUNT_H
