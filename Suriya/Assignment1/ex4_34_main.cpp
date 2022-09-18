#include <iostream>
using namespace std;

int main(){

    //part(a)
    int number,i=1, product=1;
    cout<<"Part (a): Enter an integer calculating its factorial: ";
    cin>>number;
    if (number==0)
        cout<<"Factorial of "<<number<<" is "<<product<<endl;
    else if (number<0)
        cout<<"Invalid number. Type a non-negative integer."<<endl;
    else{
        while(i<=number){
            product=product*i;
            i++;
        }
        cout<<"Factorial of "<<number<<" is "<<product<<endl;
    }

    //part(b)
    i=1, product=1;
    double sum=1.0;
    cout<<"\nPart (b): Enter the number of terms (in the summation) for the estimation of e: ";
    cin>>number;
    if (number<=0)
        cout<<"Invalid input."<<endl;
    else{
        while(i<=(number-1)){
            product=product*i;
            sum=sum+1.0/product;
            i++;
        }
        cout<<"The value of e approximated to "<<number<<" terms:"<<sum<<endl;
    }

    //Part(c)
    i=1, product=1;
    sum = 1.0;
    double power = 1.0, x=0.0;
    cout<<"\nPart (c): Enter the number to calculate exponential: ";
    cin>>x;
    cout<<"Enter the number of terms (in the summation) for the estimation of its exponential: ";
    cin>>number;
    if (number<=0)
        cout<<"Invalid input."<<endl;
    else{
        while(i<=(number-1)){
            product=product*i;
            power = power*x;
            sum=sum+power/product;
            i++;
        }
        cout<<"The value of exponential of "<<x<<" approximated to "<<number<<" terms: "<<sum<<endl;
    }
}