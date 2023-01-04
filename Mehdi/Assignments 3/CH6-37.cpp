#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <chrono>

using namespace std;


void fibonacci_int(int n)
{
    int counter = 0;
    int tmp1 = 1;
    int tmp2 = 0;
    //cout << 0 << ",  ";
    for (int i = 1; i <= n; i++)
    {
        cout << counter << ",  ";
        tmp2=tmp1;
        tmp1 = counter;
        counter = tmp1 + tmp2;

        if (counter < 0){
            cout << endl << "The limit for (int) is: " << i-1 << endl;
            break;
        }

    }
}

void fibonacci_double(int n)
{
    double counter = 0;
    double tmp1 = 1;
    double tmp2 = 0;
    //cout << 0 << ",  ";
    for (int i = 1; i <= n; i++)
    {
        cout << counter << ",  ";
        tmp2=tmp1;
        tmp1 = counter;
        counter = tmp1 + tmp2;

        if (counter < 0){
            cout << endl << "The limit for (double) is: " << i-1 << endl;
            break;
        }

    }
}

int main() {
    fibonacci_int(500);
    fibonacci_double(10000);
}