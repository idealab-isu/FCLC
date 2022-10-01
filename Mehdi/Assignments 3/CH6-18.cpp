#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

int integerPower(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main() {

    cout << "integerPower(3,4) = :" << integerPower(3,4) << endl;

}