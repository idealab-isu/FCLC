#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int number;
    int factorial;
    int number_rep;
    int accuracy;
    double sum_exponent;
    double fact_calc;
    double accuracy_rep;
    double accuracy_rep1;
    double x;
    double sum_exponent_high;
    factorial = 1;
    sum_exponent = 1;
    sum_exponent_high = 1;
    cout<<"Enter the number whose factorial needs to be found: ";
    cin>> number;
 // Part a
    if (number >0) {
        number_rep = number;
        while (number_rep > 0) {
            factorial = factorial * number_rep;
            number_rep = number_rep - 1;
        }
        cout << "The factorial of the number is: " << factorial << endl;
    }
    else
    {
        cout << "Factorial exists only for positive number "<<endl;
    }
//Part b
    cout<< "Enter the accuracy upto which the value of exponent is desired (positive number only): ";
    cin >> accuracy;
    accuracy_rep1 = accuracy;
    while (accuracy_rep1 > 0)
    {
        fact_calc = 1;
        accuracy_rep = accuracy_rep1;
        while (accuracy_rep > 0)
        {
            fact_calc = fact_calc * accuracy_rep;
            accuracy_rep = accuracy_rep - 1;
        }
        sum_exponent = sum_exponent + (1/fact_calc);
        accuracy_rep1 = accuracy_rep1 - 1;
    }

    cout<< "The value of e upto accuracy: " << accuracy << " is: " << sum_exponent <<endl;
//Part c
    cout << "Enter the number (x) to compute e^x: ";
    cin>> x;
    cout<< "Enter the accuracy upto which the value of exponent is desired (positive number only): ";
    cin >> accuracy;
    accuracy_rep1 = accuracy;

    while (accuracy_rep1 > 0)
    {
        fact_calc = 1;
        accuracy_rep = accuracy_rep1;
        while (accuracy_rep > 0)
        {
            fact_calc = fact_calc * accuracy_rep;
            accuracy_rep = accuracy_rep - 1;
        }
        sum_exponent_high = sum_exponent_high + ((pow(x,accuracy_rep1))/fact_calc);
        accuracy_rep1 = accuracy_rep1 - 1;
    }

    cout<< "The value e^"<<x<<" upto accuracy "<< accuracy << " is: " << sum_exponent_high;





}

