// Chapter 6:    16, 17, 18, 26, 28, 29, 31, 36, 37, 38, 39*,  41*, 42, 50

#include <iostream>
#include <iomanip>
#include <cstdlib>

/* (Random Numbers) Write statements that assign random integers to the variable n in the
following ranges:
a) 1 ≤ n ≤ 2
b) 1 ≤ n ≤ 100
c) 0 ≤ n ≤ 9
d) 1000 ≤ n ≤ 1112
e) –1 ≤ n ≤ 1
f) –3 ≤ n ≤ 11
 */
using namespace std;

/*
int main() {
    // seed by time
    srand(time(0));

    //output
    cout << "Random number for 1 less than or equal to n less than or equal to 2 is " << rand() % 2 + 1 << endl;
    cout << "Random number for 1 less than or equal to n less than or equal to 100 is " << rand() % 100 + 1 << endl;
    cout << "Random number for 0 less than or equal to n less than or equal to 9 is " << rand() % 10 << endl;
    cout << "Random number for 1000 less than or equal to n less than or equal to 1112 is " << rand() % 113 + 1000 << endl;
    cout << "Random number for -1 less than or equal to n less than or equal to 1 is " << rand() % 3 - 1 << endl;
    cout << "Random number for -3 less than or equal to n less than or equal to 11 is " << rand() % 15 - 3 << endl;

    return 0;
}

*/


/*
(Random Numbers) Write a single statement that prints a number at random from each of
        the following sets:
a) 2, 4, 6, 8, 10.
b) 3, 5, 7, 9, 11.
c) 6, 10, 14, 18, 22.

 */

/*

/*
int main() {
    srand(time(0));

//output to dislplay
    cout << "Random number for a) is " << (rand() % 5 + 1) * 2 << endl;
    cout << "Random number for b) is " << (rand() % 5 + 1) * 2 + 1 << endl;
    cout << "Random number for c) is " << ((rand() % 5 + 1) * 2 + 1) * 2 << endl;
}

*/

/* (Exponentiation) Write a function integerPower( base , exponent ) that returns the value of
base
exponent
For example, integerPower(3, 4) = 3 * 3 * 3 * 3 . Assume that exponent is a positive, nonzero
integer and that base is an integer. Do not use any math library functions
*/

/*
int integerPower( int, int );

int base, exponent;

int main()
{
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << "Result: " << integerPower( base, exponent);

    return 0;
}

//integer power function
int integerPower( int base, int exponent)
{
    int outcome = 1;
    while( exponent > 0)
    {
        outcome *= base;
        exponent--;
    }
    return outcome;
}
*/

/* ( The Greatest Common Divisor) The greatest common divisor (GCD) of two integers is the largest
integer that evenly divides each of the numbers. Write a function gcd that returns the greatest common divisor of two integers.
*/


/*
int gcd(int, int);
int gcd(int a, int b)
{
    if(a == b)
        return a;

    while(b!= 0 || a!= 0)
    {
        if( b != 0)
        {
            a %= b;
        }
        else
            return a;

        if( a != 0)
        {
            b %= a;
        }
        else
            return b;
    }

}

int main()
{
   int a, b;

   cout << "Enter two integers: ";
   cin >> a >> b;
   cout << "The GCD is " << gcd(a, b) << endl;

   return 0;
}

*/

/*
 * (Celsius and Fahrenheit Temperatures) Implement the following integer functions:
a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
c) Use these functions to write a program that prints charts showing the Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of
all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a neat tabular
format that minimizes the number of lines of output while remaining readable.
 */

/*
double celsius(double);
double fahrenheit(double);

int main()
{
    double fahr, cel;

    cout << "Calculation formulas:\nC  x  9/5 + 32 = F\n(F  -  32)  x  5/9 = C";
    cout << "\nEnter temperature in fahrenheit: ";
    cin >> fahr;
    cout << "\nIn celsius: " << fixed << setprecision(2) << celsius(fahr);

    cout << "\nEnter temperature in celsius: ";
    cin >> cel;
    cout << "\nIn celsius: " << fahrenheit(cel);
    return 0;
}

//conversion to celsius
double celsius(double fahr)
{
    return (fahr - 32 ) * 5 / 9;
}

//conversion to fahrenheit
double fahrenheit(double cel)
{
    return cel * 9 / 5 + 32;
}

// Chart


double fahrenheit(double);

int main()
{
    double fahr, cel;

    cout << "Celsius\tFahrenheit" << fixed << setprecision(2);

    for( cel = 0; cel <= 100; cel++)
    {
        cout << "\n" << cel << "\t" << fahrenheit(cel);
    }

    return 0;
}

//conversion to fahrenheit
double fahrenheit(double cel)
{
    return cel * 9 / 5 + 32;
}
*/


/*
An integer is said to be a perfect number if the sum of its divisors, including 1 (but not the number itself), is equal to the number. For example, 6 is a perfect number, be-
cause 6 = 1 + 2 + 3. Write a function isPerfect that determines whether parameter number is a perfect number. Use this function in a program that determines and prints all the perfect numbers
between 1 and 1000. Print the divisors of each perfect number to confirm that the number is indeed perfect. Challenge the power of your computer by testing numbers much larger than 1000.
*/

/*

void perfect(int);

int main()
{
    for(int number = 1; number <= 1000; number++)
    {
        perfect(number);
    }
    return 0;
}
//perfect number function
void perfect(int number)
{
    int j = 0;

    for(int i = 1; i < number; i++)
    {
        if(number % i == 0)
        {
            j = j + i;
        }
    }
    if(number == j)
    {
        cout << "\nPerfect number is " << number << " and its divisors: ";

        for(int i = 1; i < number; i++)
        {
            if(number % i == 0)
            {
                cout << i << ", ";
            }
        }
    }

}

 */

/* (Prime Numbers) An integer is said to be prime if it’s divisible by only 1 and itself. For example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.
a) Write a function that determines whether a number is prime.
b) Use this function in a program that determines and prints all the prime numbers between 2 and 10,000. How many of these numbers do you really have to test before being sure that you’ve found all the primes?
c) Initially, you might think that n/2 is the upper limit for which you must test to see whether a number is prime, but you need only go as high as the square root of n. Why?
Rewrite the program, and run it both ways. Estimate the performance improvement.

*/


/*
// a)
void primeNumber(int);

int main()
{
    int i;

    cout << "Enter integer: ";
    cin >> i;
    primeNumber(i);

    return 0;
}
void primeNumber(int i)
{
    int prime = 0;
    for(int j = 2; j < i; j++)
    {
        if(i % j == 0)
            prime++;

    }
    if(prime > 0)
        cout << "The integer is not prime";
    else
        cout << "The integer is prime";
}

// b)

int primeNumber(int);

int main()
{
    for(int x = 1; x <= 10000; x += 2)
    {
        if( x == primeNumber(x))
            cout << x << endl;
    }

    return 0;
}
int primeNumber(int x)
{
    int prime = 0;

    for(int j = 2; j < x; j++)
    {
        if(x % j == 0)
            prime++;

    }
    if(prime == 0)
        return x;
}

// c)


int primeNumber(int);

int main()
{
    for(int x = 1; x <= 100000; x += 2)
    {
        if( x == primeNumber(x))
            cout << x << endl;
    }

    return 0;
}
int primeNumber(int x)
{
    int prime = 0;

    for(int j = 2; j < sqrt(x); j++)
    {
        if(x % j == 0)
            prime++;

    }
    if(prime == 0)
        return x;
}

*/


/*
(Recursive Exponentiation) Write a recursive function power( base, exponent ) that, when invoked, returns
base exponent
For example, power( 3, 4 ) = 3 * 3 * 3 * 3 . Assume that exponent is an integer greater than or equal
to 1.


int power(int, int);

int main()
{
   int base, exponent;

   cout << "Enter base and exponent: ";
   cin >> base >> exponent;
   cout << "Result is " << power(base, exponent);

   return 0;
}

int power(int base, int exponent)
{
   while(exponent != 1)
   {
      return base * power(base, (exponent - 1));
   }
   return base;
}


(Fibonacci Series) The Fibonacci series
0, 1, 1, 2, 3, 5, 8, 13, 21, …
begins with the terms 0 and 1 and has the property that each succeeding term is the sum of the two
preceding terms. (a) Write a non-recursive function fibonacci(n) that uses type int to calculate the
nth Fibonacci number. (b) Determine the largest int Fibonacci number that can be printed on your
system. Modify the program of part (a) to use double instead of int to calculate and return Fibonacci numbers, and use this modified program to repeat part (b).














 */











