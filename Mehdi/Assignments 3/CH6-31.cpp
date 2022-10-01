#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <chrono>

using namespace std;


void GCD(int n, int m)
{
    int counter = n;
    if (m < n)
        counter = m;
    int tmp = 0;
    for(int i = 1; i <= counter; i++)
    {
        if (n % i == 0 && m % i == 0)
            tmp = i;
    }
    cout << "Greatest common divisor for "<< n << " and " << m << " is: "<< tmp << endl;
}


int main() {

    GCD(120,10);
}