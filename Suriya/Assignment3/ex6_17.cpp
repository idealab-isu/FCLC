//Exercise 6.17
#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    srand(time(0));
    cout<<"Random number generated from {2, 4, 6, 8, 10} = "<< 2 * (1 + rand()%5) << endl;
    cout<<"Random number generated from {3, 5, 7, 9, 11} = "<< 2 * (1 + rand()%5) + 1 << endl;
    cout<<"Random number generated from {6, 10, 14, 18, 22} = "<< 4 * (1 + rand()%5) + 2 << endl;
}