#include <iostream>
#include <iomanip>
using namespace std;

bool isPerfect(int number)
{
    // 1 is always divisor, so initial sum is 1 and loop started from 2
    // maximum divisor not equal to number not larger than number/2
    int sumOfDivisors = 1;
    for (int i = 2; i <= number / 2; i++)
    {
        if ((number % i) == 0)
            sumOfDivisors += i;
    }
    return (sumOfDivisors == number);
}

int main()
{
    cout << "Perfect numbers between 1 and 1000 (first number, then divisors: " << endl;
    for (int number = 1; number <= 1000; number++)
    {
        if (isPerfect(number))
        {
            cout << setw(8) << number << " = " << setw(5) << "1";
            for (int i = 2; i <= number / 2; i++)
            {
                if ((number % i) == 0)
                    cout << " + " << setw(5) << i;
            }
            cout << endl;
        }
    }
}
