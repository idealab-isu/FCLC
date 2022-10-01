#include <iostream>
using std::cout;
using std:: endl;
#include <cstdlib>
using std::rand;


int main()
{
    cout << "Random number for a) 2, 4, 6, 8, 10 is " << ( 1 + rand() % 5 ) * 2 << endl;
    cout << "Random number for b) 3, 5, 7, 9, 11 is " << ( 1 + rand() % 5 ) * 2 + 1 << endl;
    cout << "Random number for c) 6, 10, 14, 18, 22 is " << (( 1 + rand() % 5 ) * 2 + 1) * 2 << endl;
}
