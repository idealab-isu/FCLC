//Exercise 7.33

#include <iostream>
using namespace std;

int linearSearch( const int [], int, int );

int main()
{
    const int arraySize = 100;
    int a[ arraySize ];
    int searchKey;

    for ( int i = 0; i < arraySize; ++i )
        a[ i ] = 2 * i; //

    cout << "Enter integer search key: ";
    cin >> searchKey;

    int element = linearSearch( a, searchKey, arraySize );

    if ( element != -1 )
        cout << "Found value in element " << element << endl;
    else
        cout << "Value not found" << endl;
}

int linearSearch( const int array[], int key, int sizeOfArray)
{
    if (sizeOfArray==0){
        if (array[sizeOfArray]==key)
            return 0;
        else
            return -1;
    }
    if (array[sizeOfArray-1]==key)
        return sizeOfArray-1;
    else
        return linearSearch(array, key, sizeOfArray-1);
}