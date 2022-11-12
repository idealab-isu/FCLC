//Exercise 8.13

#include<iostream>

using namespace std;

void mystery1( char *, const char * );

int main(){
    char string1[ 80 ];
    char string2[ 80 ];
    cout << "Enter two strings: ";
    cin >> string1 >> string2;
    mystery1( string1, string2 );
    cout << string1 << endl;
}

//The function appends string 2 to the end of string 1
//Two pointers pointing to the first elements of each string are initialised here
void mystery1( char *s1, const char *s2 ){
    //the while loop increments the pointer s1 till it points the last non-'/0' element of the first string
    while ( *s1 != '\0' )
    ++s1;

    //the for loop copies each element from s2 to the tail of s1
    for ( ; *s1 = *s2; ++s1, ++s2 );
}
