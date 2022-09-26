#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double pi_value;
    double size;
    double i;
    pi_value = 4.0;
    cout<<"Enter the number of terms for calculating pi value: ";
    cin>> size;

    for ( i= 2 ; i<= size; i++) {
        cout << pi_value <<setprecision (4)<< endl;
        if (fmod(i,2) == 0) {
            pi_value = pi_value - (4 / (i * 2 - 1));
        }
        else {
            pi_value = pi_value + (4 / (i * 2 - 1));
        }
    }
     cout<<pi_value;
}
