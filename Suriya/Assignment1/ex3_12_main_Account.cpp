//Exercise 3.12 - Main File
//ex3_12-main.cpp

#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account account1(1750), account2(-20);
    cout << "Account1 created with balance:" << account1.getBalance()
         <<"\nAccount2 created with balance: " << account2.getBalance()<< "\n"<<endl;
    account2.credit(30);
    cout << "Amount credited successfully. Account2 current balance: " << account2.getBalance()<<endl;
    account1.debit(67);
    cout << "Amount debited successfully. Account1 current balance: " << account1.getBalance()<<endl;
    account2.debit(100);
}
