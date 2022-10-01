#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>

using namespace std;



int main() {

    cout << "///////////////////////// (a) /////////////////////////" << endl;
    int a[5] = {2, 4, 6, 8, 10};
    for (int i = 0; i <= 10; i++) {
        int n = rand() % 5;
        cout << a[n] << endl;
    }
    cout << "///////////////////////// (b) /////////////////////////" << endl;
    int b[5] = {3, 5, 7, 9, 11};
    for (int i = 0; i <= 10; i++) {
        int n = rand() % 5;
        cout << b[n] << endl;
    }
    cout << "///////////////////////// (c) /////////////////////////" << endl;
    int c[5] = {6, 10, 14, 18, 22};
    for (int i = 0; i <= 10; i++) {
        int n = rand() % 5;
        cout << c[n] << endl;
    }
}