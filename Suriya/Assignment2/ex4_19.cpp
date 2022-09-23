//Exercise 4.19

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double pi = 4;
    cout<<setw(12)<<"No.of terms"<<setw(20)<<"Pi's value"<<endl;
    cout<<fixed<<setprecision(10);
    for(int i=1; i<=20000; i++){
        pi = pi + pow(-1,i)*4.0/(2*i+1);
        if (i%1000==0 && i>=1000){
            cout<<right<<setw(12)<<i;
            cout<<right<<setw(20)<<pi<<endl;
        }
    }
    return 0;
}
