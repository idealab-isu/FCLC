//Chapter 7:    11, 12, 15, 18, 24, 25, 29, 30, 31, 33, 37, 40

#include <iostream>
#include <iomanip>
using namespace std;
// --- 7.11 ---

/*
int main()
{
    const int arraySize = 10; // size of array a
    int data[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int insert; // temporary location used to swap array elements

    cout << "Welcome to the Bubble Sort Algorithm\n";

    // output original array
    for ( int i = 0; i < arraySize; i++ )
        cout << setw( 4 ) << data[ i ];

    //int insert; // temporary variable to hold element to insert
    cout << "\nUnsorted array:\n";
// output original array
    for ( int i = 0; i < arraySize; ++i )
        cout << setw( 5 ) << data[ i ];
// insertion sort
// loop over the elements of the array
    for ( int next = 1; next < arraySize; ++next )
    {
        insert = data[ next ]; // store the value in the current element
        int moveItem = next; // initialize location to place element
// search for the location in which to put the current element
        while ( ( moveItem > 0 ) && ( data[ moveItem - 1 ] > insert ) )
        {
            // shift element one slot to the right
            data[ moveItem ] = data[ moveItem - 1 ];
            moveItem--;
        } // end while
        data[ moveItem ] = insert; // place inserted element into the array
    } // end for


            cout << "\nBubble sorted array:\n";
// output sorted array
        for ( int i = 0; i < arraySize; ++i )
            cout << setw( 5 ) << data[ i ];
        cout << endl;
    } // end main
*/



// --- 7.12 ---

/*

int main( void )
{
    const int MAX = 20;
    int a[ MAX ] = { 0 }; // array for user input
    int i; // loop counter
    int j; // loop counter
    int k = 0; // number of values currently entered
    int duplicate; // flag for duplicate values
    int value; // current value

    cout << "Enter 20 numbers between 10 and 100.\n";

    // get 20 numbers from user
    for ( i = 0; i <= MAX - 1; i++ )
    {
        duplicate = 0;
        cin >> value;

        // validate and test if number is a duplicate
        if ( value >= 10 && value <= 100 )
        {
            for ( j = 0; j < k; j++ )
            {

                // if duplicate, raise flag and break loop
                if ( value == a[ j ] )
                {
                    duplicate = 1;
                    cout << "You duplicated a number.\n";
                    break;
                } // end raise flag

            } // end for

            // if number is not a duplicate, enter it in array
            if ( !duplicate )
            {
                a[ k++ ] = value;
            } // end if - not duplicate
        } // end if - validate and test
        else
            cout << "invalid number.\n";

    } // end for - get 20 numbers

    cout << "\nThe non-duplicate values are:\n";

    // display array of nonduplicate values
    for ( int i = 0; a[ i ] != 0; i++ && i < MAX)
    {
        cout << a[ i ] << ", ";
    } // end for - display array

    cout << "\n";

    return 0; // indicate successful termination

} // end main


 */


// --- 7.15 ---
/*
int i;
int main()
{

    int arr[20];
    for (int i=0;i<20;i++)
    {
        cout<<"enter the element no "<<i+1<<endl;
        cin>>arr[i];
    }

    for (i=0;i<20;i++)
    {
        for (int j=0;j<20;j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j])
                    arr[j]=0;
                else
                    continue;
            }
            else
                continue;
        }
    }

    for (i=0;i<20;i++)
    {
        if (arr[i]<=100&&arr[i]>=10)
            cout<<arr[i]<<endl;
        else
            continue;
    }

}

*/


//--- 7.18 ---
// This is a program that takes an array, sums the elements of the array and puts the sum in the first element (recursion)


// --- Recursion ---























