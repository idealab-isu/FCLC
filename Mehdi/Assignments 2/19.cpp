#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

// Function for calculating pi
void Calc_pi(int terms)
{  
    long double pi = 0;
    int sign = -1;
    for (int i=1; i<= 2 * terms; i = i + 2)
    {
        sign = sign * -1;
        pi += sign * (4.0 / double (i) );
        if ((i + 1) % 2000 ==0)
        {
            cout << "Number of terms: "<< (i + 1) / 2 << "    " << "Pi: " << pi << endl;
        }
    }
}

int main()
{
    int t;
    cout << "How many terms do you want to calculate pi? ";
    cin >> t;
    Calc_pi(t);

}