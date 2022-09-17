#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Factorial
int fact(int n){
    double factorial = 1;
    if (n < 0){
        cerr<< " Not a non negative number!"<<endl;
    } else if (n<=1) {
        factorial = 1;
    } else{
        while( n > 1 ){
            factorial *= n;
            n--;
        }

    }
    return factorial;
}

// Value of e
double val_e(int n){
    double e = 0;
    n--;
    while(n>=0){
        e += 1.0/(fact(n));
        n--;
    }
    return e;
}

//Value of e^x
double val_ex(int n, int x){
    double sum = 1;
    n--;
    while(n > 0){
        sum += pow(x,n)/(fact(n));
        n--;
    }
    return sum;

}

int main() {
    int n, p,x;
    cout << "Enter the number of terms required for calculating the value of e: ";
    cin >> n;
    cout << "The value of e is "<< val_e(n)<< endl;
    cout << "Enter the number of terms required for calculating the value of e^x and the value for x: ";
    cin >> p >> x;
    cout << "The value of e^x is "<< val_ex(p,x)<< endl;

    return 0;
}
