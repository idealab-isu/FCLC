#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void primeNumber(int);

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    primeNumber(num);

    return 0;
}
void primeNumber(int num)
{
    int prime = 0;
    for(int j = 2; j < num; j++)
    {
        if(num % j == 0)
            prime++;

    }
    if(prime > 0)
        cout << "The integer is not prime";
    else
        cout << "The integer is prime";
}
