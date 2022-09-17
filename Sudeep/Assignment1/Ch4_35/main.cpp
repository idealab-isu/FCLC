#include <iostream>
using namespace std;


// ENFORCING PRIVACY WITH CRYPTOGRAPHY

int func_encrypt(int num){
    int swap, enc_num;
    int first = num % 10;
    int second = (num/10) % 10;
    int third = (num / 10) / 10 % 10;
    int fourth = ((num/10) /10)/10;

    first = (first + 7) % 10;
    second = (second + 7) % 10;
    third = (third + 7) % 10;
    fourth = (fourth + 7 ) % 10;

    swap = first;
    first = third; third = swap;
    swap = second;
    second = fourth; fourth = swap;
    enc_num = fourth * 1000 + third * 100 + second * 10 + first;
    cout << " Encrypted number is : " << enc_num << endl;
    return enc_num;
}

int func_decrypt(int num){
    int swap, dec_num ;
    int first = num % 10;
    int second = (num/10) % 10;
    int third = (num / 10) / 10 % 10;
    int fourth = ((num/10) /10)/10;

    swap = first;
    first = third ; third = swap;
    swap = second;
    second = fourth; fourth = swap;




    first = (first+3) % 10; second = (second + 3) % 10; third = (third + 3) % 10;
    fourth  = (fourth + 3) % 10;
    dec_num = fourth * 1000 + third * 100 + second * 10 + first;
    cout << "Decrypted number is : " << dec_num << endl;
}


int main() {
    int num;
    cout << " Enter a four digit number to encrypt: "; cin >> num;
    func_decrypt(func_encrypt(num));
    return 0;
}
