#include <iostream>
#include <string>
#include <bits/stdc++.h>


using namespace std;

//int divisor_10(int n){
//    return pow(10,n);
//}


int main() {
    int bin_number,a,dec_equivalent = 0;
    cout << "Enter an integer with only 0s and 1s: ";
    cin >> bin_number;
    int bin_len = to_string(bin_number).length() ;
    a = bin_number;
    int i = 0;
    while(i < bin_len){
        dec_equivalent += a % 10 * pow(2,i);
        a = a / 10;
        i++;
    }
    cout << "Decimal equivalent of "<< bin_number <<" is "<< dec_equivalent <<endl;
    return 0;
}
