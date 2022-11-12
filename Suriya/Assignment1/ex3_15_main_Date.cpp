//Exercise 3.15 - Main File
//ex3_15-main.cpp

#include <iostream>
#include "Date.h"
using namespace std;

int main(){
    Date date1(13,14,2020), date2(10,21,1999);
    cout<<"Date record created for date1\n"
        <<"Date record created for date2"<<endl;
    date1.displayDate();
    date2.displayDate();
    date1.setMonth(3);
    cout<<"\nNew month set for date1.\n"<<endl;
    date1.displayDate();
    date2.displayDate();
}
