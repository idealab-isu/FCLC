
#include <iostream>
#include "Account.h"

int main() {
    Account Acct1(-100);
    Account Acct2(50);
    cout << "Account balance for Acct1 $" << Acct1.getBalance() << endl;
    Acct2.debit(60);
    Acct1.credit(200);
    cout << "Balance in Acct1 after credit is $" << Acct1.getBalance() << endl;

}
