#pragma once
#include <string> 
using namespace std;


class Invoice
{
public:
	Invoice(string, string, int, int); 
	void set_part_number(string); 
	void set_part_description(string); 
	void set_price(int); 
	void set_quantity(int); 

	string get_part_number(); 
	string get_part_description(); 
	int get_quantity();
	int get_price(); 
	int get_invoice();
private:
	string part_number; 
	string part_description;
	int part_quantity;
	int part_price;
	};
