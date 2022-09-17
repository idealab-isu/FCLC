//Exercise 3.13 - Class Source File
//ex3_13-Invoice.cpp

#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

Invoice::Invoice(string partnumb, string partdescript, int quan, int price1){
    setPartNumber(partnumb);
    setPartDescript(partdescript);
    setQuant(quan);
    setPrice(price1);
}

void Invoice::setPartNumber(string partnumb){
    partNumber = partnumb;
}

void Invoice::setPartDescript(string partdescript){
    partDescript = partdescript;
}

void Invoice::setQuant(int quan){
    if (quan>=0)
        quant = quan;
    if (quan<0){
        cout<<"Invalid input value. Quantity set to 0."<<endl;
        quant = 0;
    }
}

void Invoice::setPrice(int price1){
    if (price1>=0)
        price = price1;
    if (price1<0){
        cout<<"Invalid input value. Price set to 0."<<endl;
        price = 0;
    }
}

string Invoice::getPartNumber() {
    return partNumber;
}

string Invoice::getPartDescript() {
    return partDescript;
}

int Invoice::getQuant() {
    return quant;
}

int Invoice::getPrice() {
    return price;
}

int Invoice::getInvoiceAmount() {
    return getQuant()*getPrice();
}