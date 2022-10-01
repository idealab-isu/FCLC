#include <iostream>
using std::cout;
using std::cin;

int integerPower( int, int );

int base, exponent;

int main()
{
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << "Result: " << integerPower(base, exponent);

    return 0;
}

int integerPower( int base, int exponent)
{
    int result = 1;
    while( exponent > 0)
    {
        result *= base;
        exponent--;
    }
    return result;
}
