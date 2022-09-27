//
// Created by ankush on 8/30/22.
//

//
// Invoice class definition. This file presents Invoice's public
// interface without revealing the implementations of Invoice's member
// functions, which are defined in Invoice.cpp.

#include<string>
using namespace std;
// Invoice class definition

class Invoice
{
public:
    Invoice( string, string, int, int ); // constructor that initializes part number,
    // part description, quantity and price per item
    void setPartNumber( string ); // function that sets part number
    string getPartNumber(); //function that gets the part number
    void setPartDesc( string ); // function that sets part description
    string getPartDesc(); //function that gets the part description
    void setQuantityItem( int ); // function that sets Quantity
    int getQuantityItem(); //function that gets the Quantity
    void setItemPrice( int ); // function that sets item
    int getItemPrice(); //function that gets the part number
    int getInvoiceAmount(); // function that returns the invoice amount

private:
    string partNumber; // part number
    string partDesc; // part description
    int quantityItem; // Number of items
    int itemPrice; // Price for each item
};
