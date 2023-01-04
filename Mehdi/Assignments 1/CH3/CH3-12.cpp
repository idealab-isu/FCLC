#include <iostream>
#include "Account.h" // include definition of class Account
using namespace std;


Account::Account(int balance)
{
	if (balance > 0)
		account_balance = balance;
	else {
		cout << "\nInitial balance was invalid\n";
		account_balance = 0;
	}	

} 


void Account::credit(int credit)
 {
	account_balance += credit;
	 } 


void Account::debit(int withdraw)
{
	if (withdraw < account_balance)
		account_balance -= withdraw; 
	else
		cout << "\nDebit amount exceeded account balance.\n";
} 

 
int Account::getBalance()
{
	 return account_balance; 
	 } 