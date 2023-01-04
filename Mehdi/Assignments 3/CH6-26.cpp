#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

int celsius(int temp)
{
    return (temp - 32) * 0.556;
}

int fahrenheit(int temp)
{
    return (temp * 1.8) + 32;
}

int main() {

    cout << "Fahrenheit equivalent: " << endl;
    cout << "Celsius  ------------ Fahrenheit " << endl;

    for (int i = 0; i <= 100; i++)
    {
        cout << i <<"                      "<< fahrenheit(i) << endl;

    }

    cout << endl << endl << "Fahrenheit equivalent: " << endl;
    cout << "Fahrenheit  ------------ Celsius " << endl;

    for (int i = 32; i <= 212; i++)
    {
        cout << i <<"                      "<< celsius(i) << endl;

    }

}