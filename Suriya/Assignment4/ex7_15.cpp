//Exercise 7.15

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    const int arraySize=20;
    int c[arraySize] = {}, checker=0, counter=0;
    cout<<"Enter 20 integer values between 10 and 100 inclusive: "<<endl;

    for (int i=0; i<arraySize; i++){
        cin>>checker;
        counter=0;
        for (int j=0; j<i-1; j++){
            if (checker==c[j])
                counter++;
        }
        if(counter==0)
            c[i]=checker;
    }

    counter = 0;
    cout<<"Unique values entered: "<<endl;
    for (int i=0; i<arraySize; i++){
        if (c[i]!=0){
            cout<<setw(5)<<c[i];
            counter++;
            if (counter%5==0)
                cout<<endl;
        }
    }

}