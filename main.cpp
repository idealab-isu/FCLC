#include <iostream>
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

    int num, newnum;

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

    return  0;
/* end of Chapter 2 */


// Chapter 3:   5 to 15


}
