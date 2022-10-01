#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>

int primeNumber(int);

int main()
{
    for(int x = 1; x <= 100000; x += 2)
    {
        if( x == primeNumber(x))
            cout << x << endl;
    }

    return 0;
}
int primeNumber(int x)
{
    int prime = 0;

    for(int j = 2; j < sqrt(x); j++)
    {
        if(x % j == 0)
            prime++;

    }
    if(prime == 0)
        return x;
}
