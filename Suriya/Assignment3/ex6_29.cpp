//Exercise 6.29

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

bool isPrime(int);

int main(){
    int rowCounter=0;
    for(int number=1; number<=10000; number++){
        if(isPrime(number)){
            cout<<setw(6)<<number;
            rowCounter++;
            if (rowCounter%5==0)
                cout<<endl;
        }
    }
}

bool isPrime(int num){
    int breaker=1;
    for(int i=2; i<sqrt(num) && breaker!=0; i++){
        if(num%i==0){
            breaker=0;
        }
    }
    if (breaker==1 && num!=1)
        return 1;
    else
        return 0;
}