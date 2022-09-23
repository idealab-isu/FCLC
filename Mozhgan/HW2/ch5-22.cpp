#include <iostream>
using namespace std;

int main()
{
	// a:
	int x;
	int y;
	cout << "Enter x and y for check !( x < 5 ) && !( y >= 7 ) [-1 -1 for exit]:";
	cin >> x >> y;
	while ((x != -1) or (y != -1))
	{
		bool condition1 = !( x < 5 ) && !( y >= 7 );
		bool condition2 = ! (( x < 5 ) || ( y >= 7 ));
		cout << condition1 << " equivalent " << condition2 << endl;
		cout << "Enter x and y for check !( x < 5 ) && !( y >= 7 ) [-1 -1 for exit]:";
		cin >> x >> y;
	}
	
	// b:
	int a, b, g;
	cout << "Enter a, b and g for check !( a == b) || !( g != 5 ) [-1 -1 -1 for exit]:";
	cin >> a >> b >> g;
	while ((x != -1) or (y != -1) or (g != -1))
	{
		bool condition1 = !( a == b) || !( g != 5 );
		bool condition2 = ! (( a == b ) && ( g != 5 ));
		cout << condition1 << " equivalent " << condition2 << endl;
		cout << "Enter a, b and g for check !( a == b) || !( g != 5 ) [-1 -1 -1 for exit]:";
		cin >> a >> b >> g;
	}
	
	// c:
	cout << "Enter x and y for check !(( x <= 8 ) && ( y > 4 ))	 [-1 -1 for exit]:";
	cin >> x >> y;
	while ((x != -1) or (y != -1))
	{
		bool condition1 = !(( x <= 8 ) && ( y > 4 ));
		bool condition2 = !( x <= 8 ) || !( y > 4 );
		cout << condition1 << " equivalent " << condition2 << endl;
		cout << "Enter x and y for check !(( x <= 8 ) && ( y > 4 )) [-1 -1 for exit]:";
		cin >> x >> y;
	}
	
	// d:
	int i, j;
	cout << "Enter i and j for check !(( i > 4 ) || ( j <= 6 ))	 [-1 -1 for exit]:";
	cin >> i >> j;
	while ((i != -1) or (j != -1))
	{
		bool condition1 = !(( i > 4 ) || ( j <= 6 ));
		bool condition2 = !( i > 4 ) && !( j <= 6 );
		cout << condition1 << " equivalent " << condition2 << endl;
		cout << "Enter i and j for check !(( i > 4 ) || ( j <= 6 ))	 [-1 -1 for exit]:";
		cin >> i >> j;
	}
}
