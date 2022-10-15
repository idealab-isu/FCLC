//Exercise 2.19
//ex2_19-main.cpp

#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cout << "Input three different integers: ";
    cin >> a >> b >> c;
    cout << "Sum is "<< a+b+c <<endl;
    cout << "Average is "<< (a+b+c)/3 <<endl;
    cout << "Product is "<< a*b*c <<endl;

    if (a<=b){
        if (a<=c)
            cout<<"Smallest is "<<a<<endl;
        if (a>c)
            cout<<"Smallest is "<<c<<endl;
    }
    if (a>b){
        if (b<=c)
            cout<<"Smallest is "<<b<<endl;
        if (b>c)
            cout<<"Smallest is "<<c<<endl;
    }

    if (a>=b){
        if (a>=c)
            cout<<"Largest is "<<a<<endl;
        if (a<c)
            cout<<"Largest is "<<c<<endl;
    }
    if (a<b){
        if (b>=c)
            cout<<"Largest is "<<b<<endl;
        if (b<c)
            cout<<"Largest is "<<c<<endl;
    }
}
