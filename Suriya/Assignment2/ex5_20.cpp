//Exercise 4.20

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    cout<<" Pythagorean Triplets "<<endl;
    int l=1;
    for (int i=1; i<=500; i++){
        for (int j=i; j<=500; j++) {
            for (int k=i; k<=500; k++){
                if ((i*i+j*j)==k*k) {
                    cout << setw(5) << i << setw(5) << j << setw(5) << k << endl;
                }
            }
        }
    }

}

