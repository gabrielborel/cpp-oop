#include <iostream>
#include "Account.hpp"
#include "Owner.hpp"

using namespace std;

int main() {
    Owner const owner("Gabriel Borel", "19252283714");
    Account account("123456", owner);

    account.deposit(100);
    cout << account.getBalance() << endl;

    account.withdraw(20);
    cout << account.getBalance() << endl;

    cout << account.getOwner().getName() << endl;
    cout << account.getOwner().getIdentification() << endl;
    cout << account.getNumber() << endl;

    cout << Account::getNumberOfAccounts() << endl;

    return 0;
}
