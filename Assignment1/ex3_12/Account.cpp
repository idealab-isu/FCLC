//Exercise 3.12 - Class Source File
//ex3_12-Account.cpp

#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(int number) {
    setBalance(number);
}

void Account::setBalance(int number) {
    if (number>=0)
        balance = number;
    if (number<0) {
        balance = 0;
        cout << "Error: Invalid value. Balance set to 0." << endl;
    }
}

int Account::getBalance() {
    return balance;
}

void Account::credit(int cred) {
    setBalance(getBalance()+cred);
}

void Account::debit(int deb) {
    if (deb<=getBalance())
        setBalance(getBalance()-deb);
    if (deb>getBalance())
        cout<<"Debit amount exceeded account balance."<<endl;
}