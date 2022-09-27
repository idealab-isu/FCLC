#include <iostream>
using namespace std;
int main() {

// Converting to encrypted number from an original number
    int number;
    int first_digit;  // digits of the number
    int second_digit;
    int third_digit;
    int fourth_digit;
    int encrypted_number;
    cout<<"Enter the four digit number: ";
    cin>>number;
    first_digit = (number/1000) % 10;
    second_digit = (number/100) % 10;
    third_digit = (number/10) % 10;
    fourth_digit = (number/1) % 10;

    first_digit = (first_digit + 7) % 10;
    second_digit = (second_digit + 7) % 10;
    third_digit = (third_digit + 7) % 10;
    fourth_digit = (fourth_digit + 7) % 10;

    cout<<"Encrypted Number: "<<first_digit<<second_digit<<third_digit<<fourth_digit<<endl;

// converting from encrypted to original number

    cout<<"Enter the four digit encrypted number: ";
    cin>>encrypted_number;
    first_digit = (encrypted_number/1000) % 10;
    second_digit =  (encrypted_number/100) % 10;
    third_digit = (encrypted_number/10) % 10;
    fourth_digit = (encrypted_number/1) % 10;

    first_digit = ((1*10 + first_digit) - 7)%10;
    second_digit = ((1*10 + second_digit) - 7)%10;
    third_digit = ((1*10 + third_digit) - 7)%10;
    fourth_digit = ((1*10 + fourth_digit) - 7)%10;

    cout<<"Decrypted Number: "<<first_digit<<second_digit<<third_digit<<fourth_digit<<endl;





}
