#include <iostream>
#include "Invoice.h" 
using namespace std;


Invoice::Invoice(string part, string description, int quantity, int price)
{
	part_number = part;
	part_description = description;
	part_quantity = 0;
	part_price = 0;
	if (quantity > 0)
		part_quantity = quantity;
	if (price > 0)
		part_price = price;
	}	




void Invoice::set_part_number(string part)
 {
	part_number = part; 
	 } 

void Invoice::set_part_description(string description)
{
	part_description = description;
} 

void Invoice::set_price(int price)
{
	part_price = price;
	if (price < 0)
		part_price = 0;
} 


void Invoice::set_quantity(int quantity)
{
	part_quantity = quantity; 
	if (quantity < 0)
		part_quantity = 0;
} 



string Invoice::get_part_number()
{
	return part_number; 
}
string Invoice::get_part_description()
{
	return part_description; 
} 


int Invoice::get_price()
{
	return part_price; 
} 


int Invoice::get_quantity()
{
	return part_quantity;
} 

int Invoice::get_invoice()
{
	return part_quantity * part_price; 
} 


