#include <iostream>
using namespace std;

int main()
{
	int count; 
	bool stop = false;
	for ( count = 1; count <= 10, !stop; ++count )
	{
		if ( count == 4 ) 
			stop = true; 
		
		cout << count << " ";
	} 
		
	cout << "\nBroke out of loop at count = " << count << endl;
} 
