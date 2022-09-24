#include <iostream>
#include <iomanip>

// Homework 1
// By James Afful

// Question 1 - Chapter 2 - 19, 24, 25, 28

// (Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest and largest of these numbers.
// The screen dialog should appear as follows:
//Input three different integers: 13 27 14
//Sum is 54
//Average is 18
//Product is 4914
//Smallest is 13
//Largest is 27

using namespace std;

int main() {
    // Question 19
/*    int num1, num2, num3;
    int sum, product;
    float average;
    cout << "Hi there! This is the solution to Question 19 of Chapter 2" << endl;

    cout << "Input any three numbers of your choice " << endl;
    cin >> num1 >> num2 >> num3;

    sum = num1 + num2 + num3;
    cout << "The Sum is " << sum << endl;

    average = (num1 + num2 + num3)/3.0;
    cout << " The Average is " << average << endl;

    product = num1 * num2 * num3;
    cout << " The Product is " << product << endl;

    int min, max;

    min = num1;
    if (min > num2)
        min = num2;
    if (min > num3)
        min = num3;
    cout << min << " is the smallest" << endl;

    max = num3;
    if (num2 > max)
        max = num2;
    if (num1 > max)
        max = num1;
    cout << max << " is the largest number" << endl;


    // Question 24
    // Write a program that reads an integer and determines and prints whether it’s odd or even. [Hint: Use the modulus operator. An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2.]

    cout << "\n Hi there! This is the solution to Question 24 of Chapter 2" << endl;
    int oddoreven;

    cout << "Enter a number " << endl;
    cin >> oddoreven;

    int even, odd;

    odd = oddoreven % 2;

    if (odd <= 0)
        cout << "The number is even" << endl;
    else
        cout << "The number is odd" << endl;



    // Question 25
    //Write a program that reads in two integers and determines and prints if the first is a multiple of the second. [Hint: Use the modulus operator.]
*/

/*
    cout << "Hi there, this is the solution to Question 25 of Chapter 2" << endl;
    int num1, num2;
    int multiple;

    cout << "Type in any two numbers: " << endl;

    cin >> num1 >> num2;

    multiple = num1 % num2;

    if (multiple <= 0)
        cout << "The first is a multiple of the second" << endl;
    else
        cout << "The first is not a multiple of the second" << endl;
*/
// Question 28
// Write a program that inputs a five-digit integer, separates the integer into its digits and prints them separated by three spaces each. [Hint: Use the integer division and modulus operators.] For example, if the user types in 42339, the program should print:
//[4   2   3   3   9]

/*    int num, newnum;

    cout << "Hi there! This is the solution to Question 28 of Chapter 2 \n" << "Now, enter a 5-digit integer" << endl;
    cin >> newnum;

    cout << newnum/10000 << "   ";

    newnum = newnum%10000;
    cout << newnum/1000 << "   ";

    newnum = newnum%1000;
    cout << newnum/100 << "   ";

    newnum = newnum%100;
    cout << newnum/10 << "   ";

    newnum = newnum%10;
    cout << newnum << endl;

*/

/* end of Chapter 2 */


// Chapter 4:    13, 26, 27, 34, 35


// Question 13

//Drivers are concerned with the mileage obtained by their automobiles. One driver has kept track of several trips by recording miles driven and gallons used for each trip. Develop a C++ program that uses a while statement to input the miles driven and gallons used for each
//trip. The program should calculate and display the miles per gallon obtained for each trip and print the combined miles per gallon obtained for all tankfuls up to this point

/*
    double milesDriven, gallonsUsed, totalGallons = 0.0, totalMilesDriven = 0.0, totalMilesPerGallon;

    cout << "Enter the number of gallons used (-1 to end): ";
    cin >> gallonsUsed;
    while (gallonsUsed != -2) {
        totalGallons += gallonsUsed;
        cout << "Enter the number of miles driven: ";
        cin >> milesDriven;
        totalMilesDriven += milesDriven;
        cout << "The miles per gallon for this trip was " << milesDriven / gallonsUsed << "\n\n Enter the gallons used (-1 to end): ";
        cin >> gallonsUsed;
    }
    totalMilesPerGallon = totalMilesDriven / totalGallons;
    cout << "\n The overall average Miles per Gallon was " << totalMilesPerGallon << endl;
*/

// Question 26
/*
    int number, firstDigit, secondDigit, fourthDigit, fifthDigit;
    cout << "Enter a five-digit number: ";
    cin >> number;
    firstDigit = number / 10000;
    secondDigit = number % 10000 / 1000;
    fourthDigit = number % 10000 % 1000 % 100 / 10;
    fifthDigit = number % 10000 % 1000 % 10;
    if ( firstDigit == fifthDigit && secondDigit == fourthDigit )
        cout << number << " is a palindrome" << endl;
    else
        cout << number << " is not a palindrome" << endl;

*/

// Question 27
/*
    int binary, number, decimal = 0, highBit = 16, factor = 10000;
    cout << "Enter a binary number (5 digits maximum): ";
    cin >> binary;
    number = binary;
    while ( highBit >= 1 ) {
        decimal += binary / factor * highBit;
        highBit /= 2;
        binary %= factor;
        factor /= 10;
    }
    cout << "The decimal equivalent of "
         << number << " is " << decimal << endl;

*/

// Question 34
// A---
/*
    int n = 0, number;
    unsigned factorial = 1;
    do {
        cout << "Enter a positive integer: ";
        cin >> number;
    } while ( number < 0 );
    while ( n++ < number )
        factorial *= n == 0 ? 1 : n;
    cout << number << "! is " << factorial << endl;


// B---
    int n = 0, fact = 1, accuracy = 10;
    double e = 1;
    while ( ++n < accuracy ) {
        fact *= n;
        e += 1.0 / fact;
    }
    cout << "e is " << e << endl;



// C---
    int n = 0, accuracy = 15, x = 3.0, times = 0, count;
    double e = 1.0, exp = 0.0, fact = 1.0;
    while ( n++ <= accuracy ) {
        count = n;
        fact *= n == 0 ? 1.0 : n;
        while ( times < count ) {
            if ( times == 0 )
                exp = 1.0;
            exp *= x;
            ++times;
        }
        e += exp / fact;
    }
    cout << setiosflags( ios::fixed | ios::showpoint )
         << "e raised to the " << x << " power is "
         << setprecision( 4 ) << e << endl;

*/

// Question 35


    return  0;
}
