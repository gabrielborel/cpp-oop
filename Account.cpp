#include <iostream>
#include <utility>
#include "Account.hpp"
#include "Owner.hpp"

int Account::accountsNumber = 0;

Account::Account(std::string number, Owner owner) : number(std::move(number)), owner(std::move(owner)), balance(0) {
    Account::accountsNumber++;
}

Account::~Account() {
    Account::accountsNumber--;
}

void Account::deposit(const float amount) {
    if (amount <= 0) {
        std::cout << "you cannot deposit a negative value" << std::endl;
        return;
    }

    this->balance += amount;
}

void Account::withdraw(const float amount) {
    if (amount <= 0) {
        std::cout << "you cannot withdraw a negative value" << std::endl;
        return;
    }

    if (this->balance < amount) {
        std::cout << "you cannot withdraw a value higher than the account balance" << std::endl;
        return;
    }

    this->balance -= amount;
}

float Account::getBalance() const {
    return this->balance;
}

std::string Account::getNumber() const {
    return this->number;
}

Owner Account::getOwner() const {
    return this->owner;
}

int Account::getNumberOfAccounts() {
    return Account::accountsNumber;
}
