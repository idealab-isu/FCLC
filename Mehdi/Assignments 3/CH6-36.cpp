#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <chrono>

using namespace std;


int power(int x, int n)
{
    if(n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}


int main() {

    cout << power(2, 1) << endl;
}
