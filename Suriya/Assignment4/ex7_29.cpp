//Exercise 7.29

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    const int sieveSize = 1000;
    int sieve[sieveSize] = {};
    for (int i=2; i<sieveSize; i++)
        sieve[i]=1;
    for (int j=2; j<sieveSize; j++){
        if(j==0)
            continue;
        else{
            for(int k=2*j; k<sieveSize; k=k+j)
                sieve[k]=0;
        }
    }

    int printCounter = 0;
    cout<<"Prime Numbers between 2 and 999"<<endl;
    for (int l=0; l<sieveSize; l++){
        if (sieve[l]==0)
            continue;
        else {
            cout<<setw(5)<<l;
            printCounter++;
            if (printCounter%10==0)
                cout<<endl;
        }
    }
}