//Exercise 3.12 - Header File
//ex3_12-Account.h

class Account{
    public:
        Account(int);
        void setBalance(int);
        int getBalance();
        void credit(int);
        void debit(int);

    private:
        int balance;
};