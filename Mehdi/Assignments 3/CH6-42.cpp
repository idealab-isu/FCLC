#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <chrono>

using namespace std;

int main() {

    static int x = 15;
    cout << x--<<endl;
    if(x)
        main();
}
