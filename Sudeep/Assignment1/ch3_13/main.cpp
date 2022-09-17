#include <iostream>
#include "Invoice.h"

using namespace std;
int main() {
    Invoice Inv1("2.1", "X", 3, 580);
    cout << "Part number is " << Inv1.getPartnum() << endl;
    cout << "Part description is " <<Inv1.getPartdes() << endl;
    cout << "Quantity is " <<Inv1.getQuantity() << endl;
    Inv1.setQuantity(5);
    Inv1.setPrice(100);
    Inv1.setPartnum("10");
    Inv1.setPartdes("Hammer");
    cout << "New Part number is " << Inv1.getPartnum() << endl;
    cout << "New Part description is " <<Inv1.getPartdes() << endl;
    cout << "Price per item is " << Inv1.getPrice() << endl;
    cout << "Invoice amount is " << Inv1.getInvoiceAmount() << endl;


    return 0;


}
