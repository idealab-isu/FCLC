//Exercise 4.25

#include <iostream>
using namespace std;

int main(){
    int count;
    int i=1;
    for ( count = 1; count <= 10 && i!=0; ++count ) {
        cout << count << " ";
        if ( count+1 == 5 ) //calculates for the succeeding group
            i=0;
    }
    cout << "\nBroke out of loop at count = " << count << endl;
}