#pragma once

#include <string> 
using namespace std;

class Account
{
public:
	Account(int); 
	void credit(int);
	void debit(int);
	int getBalance();
private:
	int account_balance; 
	}; 
