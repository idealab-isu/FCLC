
#include <iostream>
#include "Account.h" 
using namespace std;

// function main begins program execution
int main()
{
	
	Account customer1(20);
	Account customer2(30);




	cout << "\nAn account  created for customer1. Its balace is : $" << customer1.getBalance();
	customer1.debit(10);
	cout <<"\nWithdraw $10. Balance : $" << customer1.getBalance();
	customer1.credit(33);
	cout << "\nDeposit $33. Balance : $" << customer1.getBalance();
	cout << "\nWithdraw $90. Balance : ";
	customer1.debit(90);

	cout << "\nAn account  created for customer2. Its balace is : $" << customer2.getBalance();
	customer2.debit(10);
	cout << "\nWithdraw $10. Balance : $" << customer2.getBalance();
	customer2.credit(33);
	cout << "\nDeposit $33. Balance : $" << customer2.getBalance();
	cout << "\nWithdraw $90. Balance : ";
	customer2.debit(90);

	} // end main