#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <chrono>

using namespace std;


void isPrime(int n)
{
    string result = " is a prime number";
    for(int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            result = " is not a prime number";
            break;
        }
    }
    //cout << n << result << endl;
}

void isPrime1(int n)
{
    string result = " is a prime number";
    for(int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            result = " is not a prime number";
            break;
        }
    }
    //cout << n << result << endl;
}


int main() {

    cout << "execution time if upper limit = sqr(n)" << endl;
    auto start = std::chrono::system_clock::now();
    for (int i = 1; i <= 100000; i++)
        isPrime(i);
    auto end = std::chrono::system_clock::now();
    double a = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << "ms" << endl << endl;

    cout << "execution time if upper limit = n / 2" << endl;
    start = std::chrono::system_clock::now();
    for (int i = 1; i <= 100000; i++)
        isPrime1(i);
    end = std::chrono::system_clock::now();
    double b = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << "ms" << std::endl;

    cout << endl <<"Improvement is: " << ((b-a) / a) * 100 <<"%"<< endl;

    cout << endl << "c) Assume xy = N = sqr(N) * sqr(N) if x>=sqr(N) then y<=sqr(N)" << endl;

}