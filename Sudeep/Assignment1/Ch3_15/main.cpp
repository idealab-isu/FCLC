#include <iostream>
#include "Date.h"

using namespace std;
int main() {
    Date date(0,0,0);
    cout <<"Date is "<<date.getMonth() <<"/" <<date.getDay() <<"/"
    <<date.getYear()<<endl;
    date.setDay(16);
    date.setMonth(13);
    cout <<"Month is " << date.getMonth() << endl;
    date.setMonth(9);
    date.setYear(2022);

    cout <<"Today's date is ";
    date.displayDate() ;

    return 0;

}
