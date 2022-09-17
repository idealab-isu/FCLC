#include <iostream>

using namespace std;

int main() {
    double miles, gallons, mpg_this_trip, total_miles = 0, total_gallons = 0, total_mpg = 0;
    cout <<"Enter miles driven: ";
    cin >> miles;
    while (miles != -1) {
        cout <<"Enter gallons used: ";
        cin >> gallons;
        total_miles = total_miles + miles;
        total_gallons = total_gallons + gallons;
        mpg_this_trip = miles / gallons;
        cout <<"MPG this trip: "<<mpg_this_trip<< endl;
        total_mpg = total_miles/total_gallons;
        cout <<"Total MPG: " << total_mpg << endl;
        cout <<"Enter miles driven: ";
        cin >> miles;
    }
    return 0;
}
