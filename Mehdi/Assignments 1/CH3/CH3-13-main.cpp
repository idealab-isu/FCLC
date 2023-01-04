
#include <iostream>
#include "Invoice.h" 
using namespace std;


int main()
{
	
	Invoice product1("MC302", "Laptop", 3, 1050);
	Invoice product2("MMX83", "Iphone", 1, 520);

	

	
	cout << "\nInformation of Product 1:";
	cout << "\nPart number: " << product1.get_part_number(); 
	cout << "\nPart description: " << product1.get_part_description();
	cout << "\nQuantity: " << product1.get_quantity();
	cout << "\nPrice: " << product1.get_price();
	cout << "\nInvoice: " << product1.get_invoice();

	product1.set_part_number("MC702");
	product1.set_part_description("PC");
	product1.set_quantity(6);
	product1.set_price(1220);

	cout << "\n\nInformation of Product 1 Updated:";
	cout << "\nPart number: " << product1.get_part_number(); 
	cout << "\nPart description: " << product1.get_part_description();
	cout << "\nQuantity: " << product1.get_quantity();
	cout << "\nPrice: " << product1.get_price();
	cout << "\nInvoice: " << product1.get_invoice();


	cout << "\n\nInformation of Product 2:";
	cout << "\nPart number: " << product2.get_part_number();
	cout << "\nPart description: " << product2.get_part_description();
	cout << "\nQuantity: " << product2.get_quantity();
	cout << "\nPrice: " << product2.get_price();
	cout << "\nInvoice: " << product2.get_invoice();

	product2.set_part_number("MXX708");
	product2.set_part_description("iPhone");
	product2.set_quantity(7);
	product2.set_price(880);


	cout << "\n\nInformation of Product 2 Updated:";
	cout << "\nPart number: " << product2.get_part_number();
	cout << "\nPart description: " << product2.get_part_description();
	cout << "\nQuantity: " << product2.get_quantity();
	cout << "\nPrice: " << product2.get_price();
	cout << "\nInvoice: " << product2.get_invoice() << endl << endl;

	} // end main