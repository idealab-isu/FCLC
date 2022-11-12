//Exercise 3.13 - Main File
//ex3_13-main.cpp

#include <iostream>
#include "Invoice.h"

using namespace std;

int main() {
    Invoice invoice1("17m150","Flash Drive",3,40), invoice2("17m151","Thermometer",-6,15);
    cout << "Invoice created for product id: " << invoice1.getPartNumber()
         <<"\nInvoice created for product id: " << invoice2.getPartNumber()<< "\n"<<endl;
    invoice2.setQuant(6);
    cout<<"New quantity set for product id: "<< invoice2.getPartNumber()<< "\n"<<endl;
    invoice1.setPrice(-41);
    invoice1.setPrice(41);
    cout<<"New price set for product id: "<< invoice1.getPartNumber()<< "\n"<<endl;
    cout<<"Invoice amount for "<<invoice1.getPartDescript()<<": $ "<<invoice1.getInvoiceAmount()<<endl;
    cout<<"Invoice amount for "<<invoice2.getPartDescript()<<": $ "<<invoice2.getInvoiceAmount()<<endl;
}
