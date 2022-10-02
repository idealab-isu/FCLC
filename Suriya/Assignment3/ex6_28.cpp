//Exercise 6.28

#include<iostream>
using namespace std;

bool isPerfect(int);

int main(){
    int sum;
    for(int j=1; j<=1000; j++){
        if (isPerfect(j)){
            sum = 0;
            cout<<"Number: "<<j<<endl;
            cout<<"Divisors: ";
            for(int k=1; k<j; k++) {
                if (j % k == 0) {
                    cout << k << ",";
                    sum+=k;
                }
            }
            cout<<endl;
            cout<<"Sum of the divisors: "<<sum<<"\n"<<endl;
        }
    }

}

bool isPerfect(int num){
    int sum = 0;
    for(int i=1; i<num; i++){
        if (num%i == 0)
            sum+=i;
    }
    if (sum==num)
        return 1;
    else
        return 0;
}