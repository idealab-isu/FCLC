//Exercise 6.37

#include<iostream>
using namespace std;

int fibonacci(int);
double fibonacci(double);

int main(){
    int larIntFib, counter;
    double larDoubFib, counter2;

    for(int i=1; fibonacci(i+1)>fibonacci(i) ; i++){
        larIntFib = fibonacci(i);
        counter=i;
    }
    cout<<"The largest int number in the Fibonacci series is the "<<counter<<"th term and is "<<larIntFib<<endl;

    for(double j=1; fibonacci(j+1)>fibonacci(j); j++){
        larDoubFib = fibonacci(j);
        counter2=j;
    }
    cout<<"The largest double number in the Fibonacci series is the "<<counter2<<"th term and is "<<larDoubFib<<endl;
}

int fibonacci(int num){
    int sum = 1;
    for (int i=3; i<=num; i++){
        sum+=sum;
    }

    if(num==1)
        return 0;
    else if(num==2)
        return 1;
    else
        return sum;
}

double fibonacci(double num){
    double sum = 1;
    for (int i=3; i<=num; i++){
        sum+=sum;
    }

    if(num==1)
        return 0;
    else if(num==2)
        return 1;
    else
        return sum;
}