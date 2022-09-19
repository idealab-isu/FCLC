#include <iostream>
#include<cmath>

using namespace  std;
int main() {
    int number;
    int size;
    int sum;
    int digit;
    sum = 0;
    cout<<" Enter the binary number: ";
    cin>> number;
    size = trunc(log10(number)) + 1 ;
    cout<< size<<endl;
    while (size > 0)
    {
      digit = (number/(pow(10,(size-1)))) ;
      digit = digit % 10;
      sum = sum + digit*(pow(2,size-1));
      size = size - 1;

    }
    cout << "The decimal equivalent is: " << sum <<endl;
}
