//
// Created by ankush on 8/29/22.
//
// GradeBook class definition. This file presents Account's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in Account.cpp.

#include<string>
using namespace std;
// Account class definition

class Account
{
public:
    Account( int ); // constructor that initializes initial balance
    void Credit(); // Add amount to current balance
    void Debit(); // Add amount to current balance
    int getBalance (); // function for current balance
private:
    int accountBalance; // Account balance
};