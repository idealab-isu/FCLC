//Exercise 6.16

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    srand(time(0));
    n =  1 + rand()%2;
    cout<<"Random generation of either 1 or 2: "<< n << endl;
    n = 1 + rand()%100;
    cout<<"Random integer generated from 1 to 100: "<< n <<endl;
    n = rand()%10;
    cout<<"Random integer generated from 0 to 9: "<< n <<endl;
    n = 1000 + rand()%113;
    cout<<"Random integer generated from 1000 to 1112: "<< n <<endl;
    n = -1 + rand()%3;
    cout<<"Random integer generated from -1 to 1: "<< n <<endl;
    n = -3 + rand()%15;
    cout<<"Random integer generated from -3 to 11: "<< n <<endl;
}
