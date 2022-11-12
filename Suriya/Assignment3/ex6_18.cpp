//Exercise 6.18
#include<iostream>
using namespace std;

int integerPower(int, unsigned int);

int main(){
    cout<<"The base 3 raised to the power 10 is "<<integerPower(3, 10)<<endl;
}

int integerPower(int base, unsigned int exponent){
    if (exponent == 0)
        return 1;
    else if (exponent == 1)
        return base;
    else
        return base * integerPower(base, exponent-1);
}