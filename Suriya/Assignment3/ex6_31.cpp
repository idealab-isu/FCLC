//Exercise 6.31

#include<iostream>
using namespace std;

int gcd(int, int);

int main(){
    cout<<"GCD of 11571 and 1767 is : "<<gcd(11571, 1767)<<endl;
}

int gcd(int x, int y){
    int gcdxy=1;
    for(int i=1; i<=x && i<=y; i++){
        if(x%i==0 && y%i==0)
            gcdxy=i;
    }
    return gcdxy;
}