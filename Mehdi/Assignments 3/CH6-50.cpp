#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <chrono>

#define M_PI 3.1415
using namespace std;

inline int circleArea(double r)
{
    return M_PI * r * r;
}

int main() {
    int r;
    cout << "please enter the radius: ";
    cin >>  r;
    cout << "The area is: " << circleArea(r)<< endl;

}
