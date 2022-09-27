// Main function for class Account
#include <iostream>
#include "Account.h"

int main() {
    // create two Account objects
    Account account1 (2000);
    Account account2 (-100);
    account1.Credit();
    cout << "Final amount is "<<account1.getBalance()<<" for account 1" <<endl;
    account2.Credit();
    account2.Debit();
    cout << "Final amount is "<<account2.getBalance()<<" for account 2" <<endl;
    return 0;
}
