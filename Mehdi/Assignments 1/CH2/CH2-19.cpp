#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int i1, i2, i3;

int max(int num1, int num2, int num3) // finding the maximum of three numbers.
{
    int result = num1;
    if (num2 > num1)
        result = num2;
    if (num3 > result)
        result = num3;
   return result; 
}
int min(int num1, int num2, int num3) // finding the minimum of three numbers.
{
   // local variable declaration
    int result = num1;
    
    if (num2 < num1)
        result = num2;
    if (num3 < result)
        result = num3;
   return result; 
}



int main()
{
cout << "Please Enter First Integer:" <<endl;
cin >> i1;
cout << "Please Enter Second Integer:" <<endl;
cin >> i2;
cout << "Please Enter Third Integer:" <<endl;
cin >> i3;


cout << "Sum is "<< i1+i2+i3 <<endl;
cout << "Average is "<< (i1+i2+i3)/3.0 <<endl;
cout << "Product is "<< i1*i2*i3 <<endl;
cout << "Smallest is "<< min(i1,i2,i3) <<endl;
cout << "Largest is "<< max(i1,i2,i3) <<endl;


}
