//Exercise 3.13 - Header File
//ex3_12-Invoice.h

#include<string>
using namespace std;

class Invoice{
    public:
        Invoice(string,string,int,int);
        void setPartNumber(string);
        void setPartDescript(string);
        void setQuant(int);
        void setPrice(int);
        string getPartNumber();
        string getPartDescript();
        int getQuant();
        int getPrice();
        int getInvoiceAmount();

    private:
        string partNumber, partDescript;
        int quant, price;

};