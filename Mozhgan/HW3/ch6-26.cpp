#include <iostream>
#include <iomanip>
using namespace std;

int fahrenheit (int celsius)
{
    return celsius * 9 / 5 + 32;
}

int celsius (int fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

int main()
{
    cout << "Fahrenheit equivalents of all Celsius temperatures from 0 to 100: " << endl;
    for (int c = 1; c <= 100; c++)
    {
        cout << setw(8) << fahrenheit(c);
    }
    cout << endl;
    cout << "Celsius equivalents of all Fahrenheit temperatures from 32 to 212: " << endl;
    for (int f = 32; f <= 212; f++)
    {
        cout << setw(8) << celsius(f);
    }
    cout << endl;
}
