#include <iostream>
using namespace std;

int main() {
    int value;
    int i;
    int j;
    for (i = 1; i<=5;i++){
        cout<<"Enter the value between 1 and 30: ";
        cin>> value;

        for (j = 1; j<=value;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
