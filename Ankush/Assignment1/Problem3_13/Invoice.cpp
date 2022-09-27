//
// Created by ankush on 8/30/22.
//
// Invoice member-function definitions. This file contains
// implementations of the member functions prototyped in Invoice.h.
#include <iostream>
#include "Invoice.h" // include definition of class Invoice
using namespace std;
// constructor initializes courseName with string supplied as argument
Invoice::Invoice( string number, string description , int quantity , int priceUnit)
{
    setPartNumber( number ); // call set function to initialize partNumber
    setPartDesc( description ); // call set function to initialize description
    setQuantityItem( quantity );// call set function to initialize quantity
    setItemPrice( priceUnit );// call set function to initialize priceUnit
} // end Invoice constructor
// function to set the part number
void Invoice::setPartNumber( string number )
{
    partNumber = number; // store the part Number in the object
} // end function setPartNumber
// function to get the course name
string Invoice::getPartNumber()
{
    return partNumber; // return object's partNumber
} // end function getPartNumber
// function to set the part Description
void Invoice::setPartDesc( string description )
{
    partDesc = description; // store the part description in the object
} // end function setPartDesc
// function to get the course name
string Invoice::getPartDesc()
{
    return partDesc; // return object's partDesc
} // end function getPartDesc
// function to set the Quantity of Item
void Invoice::setQuantityItem(int quantity)
{
    if ( quantity >= 0 )
    {
        quantityItem = quantity; // store the price of unit quantity
    }
    if ( quantity < 0 )   // If the item price is negative, set to 0
    {
        quantityItem = 0; // store the price of unit quantity
    }
} // end function setQuantityItem
// function to get the quantity of item
int Invoice::getQuantityItem() {
    return quantityItem; // return object's quantityItem
} // end function getQuantityItem
// function to set the Quantity of Item
void Invoice::setItemPrice(int priceUnit)
{
    if ( priceUnit >= 0 )
    {
        itemPrice = priceUnit; // store the price of unit quantity
    }
    if ( priceUnit < 0 )   // If the item price is negative, set to 0
    {
        itemPrice = 0; // store the price of unit quantity
    }
} // end function setItemPrice
// function to get the price of unit quantity
int Invoice::getItemPrice()
{
    return itemPrice; // return object's itemPrice
} // end function getitemPrice
// function to get the Invoice Amount
int Invoice::getInvoiceAmount()
{
    int invoiceAmount;
    invoiceAmount = quantityItem*itemPrice;
    return invoiceAmount;
}// end function getInvoiceAmount

