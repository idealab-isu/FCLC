#include <iostream>
#include "Invoice.h"
using namespace std;

int main() {
    // create two Invoice objects
    Invoice invoice1( " 723 " , "Delicate Part  ", 10, -20);
    Invoice invoice2( " 256 " , "Costly Part  ", -10, 50);
// display all the use of get function
    cout << "Total Price for item number" << invoice1.getPartNumber()
    << "having description " << invoice1.getPartDesc()
    << "with quantity " << invoice1.getQuantityItem() << " and unit price " << invoice1.getItemPrice()
    << " is " << invoice1.getInvoiceAmount()<< " for invoice 1."<< endl;
    //cout << "Total Price Invoice 2" << invoice2.getInvoiceAmount()<<endl;

    cout << "Total Price for item number" << invoice2.getPartNumber()
         << "having description " << invoice2.getPartDesc()
         << "with quantity " << invoice2.getQuantityItem() << " and unit price " << invoice2.getItemPrice()
         << " is " << invoice2.getInvoiceAmount()<< " for invoice 2."<< endl;
    } // end main
