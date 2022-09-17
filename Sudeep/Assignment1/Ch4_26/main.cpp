#include <iostream>

using namespace std;

int main() {
    int number, num,rem;
    cout <<"Enter a five digit number(integer): ";
    cin >> number;
    if (number/10000 == number%10){
        num = number % 10000;
        rem = number % 100;
        if (num/1000 == rem/10){
            cout<<number << " is a palindrome " << endl;
        }
        else{
            cout<<number << " is not a palindrome " << endl;
        }
    } else{
        cout<<number << " is not a palindrome " << endl;
    }

    return 0;
}
