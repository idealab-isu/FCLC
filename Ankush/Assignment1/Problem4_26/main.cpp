#include <iostream>
# include <string>
using namespace std;

int main() {
     int number; // number entered by user
     int first_digit;  // digits of the number
     int second_digit;
     int fourth_digit;
     int fifth_digit;
     cout << "Enter the five digit number: ";
     cin >> number;
     first_digit = (number/10000) % 10;
     second_digit = (number/1000) % 10;
     fourth_digit = (number/10) % 10;
     fifth_digit = (number/1) % 10;
     if (first_digit == fifth_digit && second_digit == fourth_digit)
         cout << "It is a palindrome number"<<endl;
     else
         cout<< "It is not a palindrome number" <<endl;

}