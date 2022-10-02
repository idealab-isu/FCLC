//Exercise 6.42

#include<iostream>
using namespace std;

int main(){
    static int i=1;
    i++;
    if (i<=100) {
        cout << i << endl;
        main();
    }
    //comment: the static variable 'i' is only initialised once. everytime the function main() is called, the 'i' holds
    //its value from the previous iteration.
}