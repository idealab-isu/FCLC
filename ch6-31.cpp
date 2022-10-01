#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int gcd1(int, int);

int main()
{
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "GCD (Euclidian) is: " << gcd1(a, b) << endl;

    return 0;
}

//Euclidian
int gcd1(int a, int b)
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
