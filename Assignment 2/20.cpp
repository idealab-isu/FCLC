#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;


void Pythagorean()
{  

    for (int i=1; i<= 500; i++)
    {
        for (int j=1; j<= 500; j++)
        {
            double temp = sqrt(pow(i, 2) + pow(j, 2));
            for (int k=1; k<= 500; k++)
            {
                if (k==temp && (i+j) > k)
                cout << i << " " << j << " " << k << endl;
            }
        }
    }
}


int main()
{
    Pythagorean();
}