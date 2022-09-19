#include <iostream>
#include <string>

using namespace std;

int main() {
    int total_miles; // sum of total miles entered by user
    int total_gallons; // sum of total gallons entered by the user
    int miles; // miles for the trip
    int gallons; // gallons for the trip
    double MPG; // miles per gallon for that rip
    double total_MPG; // total miles per gallon
    // initialization phase
    total_miles = 0; // initialize total miles
    total_gallons = 0; // initialize total gallons
    total_miles = 0; // initialize total miles

// processing phase
// prompt for input and read miles from user
    cout <<"Enter miles driven (-1 to quit): ";
    cin >> miles; // input miles or sentinel value
// loop until sentinel value read from user
    while (miles != -1) // while miles is not -1
    {
        cout <<"Enter gallons used: ";
        cin >> gallons; // gallons used
        total_miles = total_miles + miles; // adding the miles
        total_gallons = total_gallons + gallons; // adding the gallons
        MPG = static_cast< double >( miles ) / gallons; // converting miles to double to get decimal values
        total_MPG = static_cast< double >( total_miles ) /
                    total_gallons; // converting total miles to double to get decimal values
        cout <<"MPG this trip: " << MPG << endl;
        cout <<"Total MPG: " << total_MPG << endl << endl;
        cout <<"Enter miles driven (-1 to quit): ";
        cin >> miles; // input miles or sentinel value
    }
}


