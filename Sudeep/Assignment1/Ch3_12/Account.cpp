//
// Created by smenon on 9/16/22.
//

#include <iostream>
#include "Account.h"

using namespace std;

Account::Account( int acct_bal){
    if (acct_bal >= 0){
        account_bal = acct_bal;
    } else{
        account_bal = 0;
        std::cerr << "Initial balance is invalid " << endl;
    }
}

void Account::credit(int amount) {
    account_bal += amount;
}

void Account::debit(int amount) {
    if(amount <= account_bal){
        account_bal -= amount;
    } else{
        std::cerr << "Debit amount exceeding account balance";
    }
}

int Account::getBalance() {
    return account_bal;
}