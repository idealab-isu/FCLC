#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>

using namespace std;


void isPerfect(int n)
{
    int tmp = 0;
    for(int i = 1; i < n; i++)
    {
        if (n % i == 0)
            tmp += i;
    }
    if (tmp == n)
    {
        cout << n << " " << "is a perfect number" << endl;
        cout << "Its divisors:" << endl;
        for(int i = 1; i < n; i++)
        {
            if (n % i == 0)
                cout << i << "  ";
        }
        cout << endl;
    }
    else
        cout << n << " " << "is not a perfect number" << endl;

}




int main() {

    for (int i = 1; i <= 1000; i++)
        isPerfect(i);

}