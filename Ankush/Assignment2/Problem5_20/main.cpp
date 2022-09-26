#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int i;
    int j;
    int k;

    for ( i =1; i<=500; i++){
        for (j = 1; j<=500; j++){
            for (k =1; k<=500; k++){
                if (pow(i,2) == pow(j,2) + pow(k,2)){
                    cout<<k<<", "<<j<<", "<<i<<" are Pythagorean Triplet"<<endl;
                }
            }

        }
    }
}
