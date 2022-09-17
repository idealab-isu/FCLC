//
// Created by smenon on 9/16/22.
//

#include <iostream>
#include "Invoice.h"

Invoice::Invoice(string number, string description, int quant, int pr){
    part_num = number;
    part_des = description;
    quantity = quant;
    price = pr;
}

string Invoice::getPartnum() {
    return part_num;
}

void Invoice::setPartnum(string number) {
    part_num = number;
}

string Invoice::getPartdes() {
    return part_des;
}

void Invoice::setPartdes(string description) {
  part_des = description ;
}

int Invoice::getQuantity() {
    return quantity;
}

void Invoice::setQuantity(int quant) {
    if (quant>= 0) {
        quantity = quant;
    } else {
        quantity = 0;
    }
}


int Invoice::getPrice() {
    return price;
}

void Invoice::setPrice(int pr) {
    if (pr >= 0) {
        price = pr;
    } else{
        price = 0;
    }
}

int Invoice::getInvoiceAmount() {
    return quantity*price;
}