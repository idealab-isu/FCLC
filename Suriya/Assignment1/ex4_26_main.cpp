#include <iostream>

using namespace std;

int main() {
    int a;
    cout<<"Enter a five digit number: ";
    cin>>a;
    if (a/10000>0) {
        if ((a / 10000) == (a % 10)) {
            if (((a / 1000) % 10) == ((a % 100) / 10))
                cout << "It's a Palindrome!" << endl;
            else
                cout << "It's not a Palindrome!" << endl;
        }
        else
            cout << "It's not a Palindrome!" << endl;
    }
    else
        cout<<"Invalid input"<<endl;
}
