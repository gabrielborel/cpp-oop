#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<string>
#include "Owner.hpp"

class Account {
private:
    static int accountsNumber;
    std::string number;
    Owner owner;
    float balance;

public:
    Account(std::string number, Owner owner);

    ~Account();

    void withdraw(float amount);

    void deposit(float amount);

    [[nodiscard]] std::string getNumber() const;

    [[nodiscard]] float getBalance() const;

    [[nodiscard]] Owner getOwner() const;

    static int getNumberOfAccounts();
};


#endif //ACCOUNT_H
