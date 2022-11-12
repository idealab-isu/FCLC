//Exercise 4.35 - Decrypter

#include<iostream>
using namespace std;

int main(){
    int number;
    int a, b, c, d, temp;
    cout<<"Enter the integer to decrypt: ";
    cin>>number;
    a = ((number/1000) + 3) - (((number/1000) + 3)/10)*10;
    b = ((number%1000)/100 + 3) - (((number%1000)/100 + 3)/10)*10;
    c = ((number%100)/10 + 3) - (((number%100)/10 + 3)/10)*10;
    d = ((number%10) + 3) - (((number%10) + 3)/10)*10;
    temp = a;
    a = c;
    c = temp;
    temp = b;
    b = d;
    d = temp;
    cout<<"decrypted data: "<<a*1000+b*100+c*10+d<<endl;
}