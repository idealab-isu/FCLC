#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>

using namespace std;



int main()
{

    cout << "///////////////////////// (a) /////////////////////////" << endl;
    for (int i=0; i <=10; i++)
    {
        int n = rand() % 2 + 1;
        cout << n << endl;
    }
    cout << "///////////////////////// (b) /////////////////////////" << endl;

    for (int i=0; i <=10; i++)
    {
        int n = rand() % 100 + 1;
        cout << n << endl;
    }
    cout << "///////////////////////// (c) /////////////////////////" << endl;

    for (int i=0; i <=10; i++)
    {
        int n = rand() % 10;
        cout << n << endl;
    }
    cout << "///////////////////////// (d) /////////////////////////" << endl;

    for (int i=0; i <=10; i++)
    {
        int n = rand() % 113 + 1000;
        cout << n << endl;
    }
    cout << "///////////////////////// (e) /////////////////////////" << endl;

    for (int i=0; i <=10; i++)
    {
        int n = rand() % 3 - 1;
        cout << n << endl;
    }

    cout << "///////////////////////// (f) /////////////////////////" << endl;

    for (int i=0; i <=10; i++)
    {
        int n = rand() % 15 - 3;
        cout << n << endl;
    }

}//
// Created by mehdi on 9/30/22.
//
