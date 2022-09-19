#include <iostream>
using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl
int main() {
    int number1; // first integer to compare
    int number2; // second integer to compare
    int number3; // second integer to compare
    int Sum;
    int Average;
    int Product;
    int Smallest;
    int Largest;
    cout << "Enter the three integers: "; // prompt user for data
    cin >> number1 >> number2 >> number3; // read two integers from user

    Sum = number1 + number2 + number3;
    Average = Sum/3;
    Product = number1*number2*number3;
    if ( number1 <= number2  && number1 <= number3)
        Smallest = number1;
    else if ( number2 <= number1  && number2 <= number3)
        Smallest = number2;
    else
        Smallest = number3;

    if ( number1 >= number2  && number1 >= number3)
        Largest = number1;
    else if ( number2 >= number1  && number2 >= number3)
        Largest = number2;
    else
        Largest = number3;

    cout << "Sum is " << Sum <<endl;
    cout << "Average is " << Average <<endl;
    cout << "Product is " << Product <<endl;
    cout << "Smallest is " << Smallest <<endl;
    cout << "Largest is " << Largest <<endl;
}
