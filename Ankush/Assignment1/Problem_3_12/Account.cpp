//
// Created by ankush on 8/29/22.
//

//Account.cpp
//Account member-function definitions. This file contains
// implementations of the member function in Account.h

#include <iostream>
#include "Account.h" // include definition of class Account
using namespace std;

Account::Account(int balance)
{
    if ( balance >= 0)
    {
        accountBalance = balance ; // store the current balance in Account balance
    }
    if ( balance < 0)
    {
      accountBalance = 0;
      cout<<" Invalid Initial Balance"<<endl;   // error message
    }
}

void Account::Credit ()
{
    int creditAmount;
    cout << "Enter the credit amount: ";
    cin >> creditAmount;
    accountBalance = accountBalance + creditAmount;   // adds credit amount
}

void Account::Debit()
{
    int debitAmount;
    cout<<"Enter the debit amount: ";
    cin >> debitAmount;
    if  (debitAmount <= accountBalance )
    accountBalance = accountBalance - debitAmount; // Subtracts debit amount
    if (debitAmount > accountBalance)
    {
        cout<<"Debit Amount exceeded account balance."<<endl;  //error message
    }
}

int Account::getBalance()
{

    return accountBalance; //returns account balance
}