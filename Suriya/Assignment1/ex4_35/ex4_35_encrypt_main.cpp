//Exercise 4.35 - Encrypter

#include <iostream>
using namespace std;

int main() {
      int number;
      int a, b, c, d, temp;
      cout<<"Enter a four digit integer to encrypt: ";
      cin>>number;
      a = ((number/1000) + 7) - (((number/1000) + 7)/10)*10;
      b = ((number%1000)/100 + 7) - (((number%1000)/100 + 7)/10)*10;
      c = ((number%100)/10 + 7) - (((number%100)/10 + 7)/10)*10;
      d = ((number%10) + 7) - (((number%10) + 7)/10)*10;
      temp = a;
      a = c;
      c = temp;
      temp = b;
      b = d;
      d = temp;
      cout<<"Encrypted data: "<< a*1000+b*100+c*10+d<<endl;
}
