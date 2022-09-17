//
// Created by smenon on 9/16/22.
//

#include <string>
using namespace std;

class Account
        {
public:
    Account( int );
    void credit(int amount);
    void debit(int amount);
    int getBalance();

private:
    int account_bal;
};