#include <iostream>
using namespace std;

int mystery2( const char * );

int main()
{
    char string1[ 80 ];
    cout << "Enter a string: ";
    cin >> string1;
    cout << mystery2( string1 ) << endl;
}

// The function returns the length of the string
int mystery2( const char *s ){
    int x;
    //for loop increments x till it encounters '/0' character
    for ( x = 0; *s != '\0'; ++s )
        ++x;

    return x;
}
