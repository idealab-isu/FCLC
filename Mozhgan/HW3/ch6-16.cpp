#include <iostream>
using std::cout;
using std:: endl;
using std::rand;

int main()
{
    cout << "Random number for 1 <= n <= 2 is " <<  1 + rand() % 2 << endl;
    cout << "Random number for 1 <= n <= 100 is " << 1 + rand() % 100 << endl;
    cout << "Random number for 0 <= n <= 9 is " << rand() % 10 << endl;
    cout << "Random number for 1000 <= n <= 1112 is " << 1000 + rand() % 113 << endl;
    cout << "Random number for -1 <= n <= 1 is " << -1 + rand() % 3 << endl;
    cout << "Random number for -3 <= n <= 11 is " << -3 + rand() % 15 << endl;
}
