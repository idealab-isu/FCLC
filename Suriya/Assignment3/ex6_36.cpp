//Exercise 6.36

#include<iostream>
using namespace std;

double power(int, int);

int main(){
    cout<<"The base 30 raised to power 3 is "<<power(30,3)<<endl;
}

double power(int base, int exponent){
    if(exponent==0)
        return 1;
    else
        return base * power(base, exponent-1);
}

