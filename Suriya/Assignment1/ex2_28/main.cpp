//Exercise 2.28
//ex2_28-main.cpp

#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter a five-digit integer: ";
    cin >> a;
    if (a/10000 > 0)
        cout<<a/10000<<"   "<<(a%10000)/1000<<"   "<<(a%1000)/100<<"   "<<(a%100)/10<<"   "<<(a%10)<<endl;
    if (a/10000 <= 0)
        cout<<"Input error. Enter a five-digit integer"<<endl;
    return 0;
}
