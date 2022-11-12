//Exercise 6.41

#include<iostream>
using namespace std;

int gcd(int, int);

int main(){
    cout<<"The gcd of 11571 and 1767 is "<<gcd(11571, 1767)<<endl;
}

int gcd(int x, int y){
    int temp;
    if (y>x){
        temp = x;
        x = y;
        y = temp;
    }
    if (y==0)
        return x;
    else
        return gcd(y,x%y);
}