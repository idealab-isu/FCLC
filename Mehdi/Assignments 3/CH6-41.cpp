#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <chrono>

using namespace std;


double gcd(int x, int y)
{
    int a = x;
    int b = y;
    if (y > x)
    {
        a = y;
        b = x;
    }
    if (y==0)
        return x;
    else
        return gcd(b, a%b);
}

int main() {

    cout << gcd(10,105)<<endl;
}
