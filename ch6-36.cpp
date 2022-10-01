#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int power(int, int);

int main()
{
    int base, exponent;

    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << "Result is: " << power(base, exponent);

    return 0;
}

int power(int base, int exponent)
{
    while(exponent != 1)
    {
        return base * power(base, (exponent - 1));
    }
    return base;
}
