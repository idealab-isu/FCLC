//Exercise 2.17

#include <iostream>

using namespace std;

int main() {
    int binary, powertwo=1;
    int a, decimal = 0, breaker=1;
    cout<<"Enter a binary number: ";
    cin>>binary;
    while (binary!=0 && breaker!=0){
        a = binary%10;
        if (a==0 || a==1){
            decimal = decimal + (a*powertwo);
            powertwo = 2 * powertwo;
            binary = binary/10;
        }
        else {
            breaker = 0;
        }
    }
    if (breaker==1)
        cout<<"Decimal equivalent: "<<decimal;
    else
        cout<<"Invalid binary input";
}
