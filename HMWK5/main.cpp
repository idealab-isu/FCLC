// Chapter 8:    8, 10, 11, 13, 14, 15,16   // 21, 22, 24, 29

#include <iostream>
using namespace std;
/*
int main()
{

    unsigned const int SIZE = 5;

    unsigned int values[SIZE] = { 2, 4, 6, 8, 10 };

    // (b) Declare a pointer vPtr that points to an object of type unsigned int.
    unsigned int *vPtr;

    // (c) Use a for statement to print the elements of array values using array subscript notation.
    for (int i = 0; i < SIZE; i++){
        cout << values[i] << endl;
    }

    // (d) Write two separate statements that assign the starting address of array values to pointer
    //variable vPtr.
    vPtr = values;
    vPtr = &values[0];

    // (e) Use a for statement to print the elements of array values using pointer/offset notation.
    for (int i = 0; i < SIZE; i++){
        cout << *(vPtr + i) << endl;
    }

    // (f) Use a for statement to print the elements of array values using pointer/offset notation
    //with the array name as the pointer.
    for (int i = 0; i < SIZE; i++){
        cout << *(values + i) << endl;
    }

    // (g) Use a for statement to print the elements of array values by subscripting the pointer to
    //the array.
    for (int i = 0; i < SIZE; i++){
        cout << (vPtr[i]) << endl;
    }

    // (h) Refer to the fifth element of values using array subscript notation, pointer/offset notation
    //with the array name as the pointer, pointer subscript notation and pointer/offset
    //notation.
    cout << values[4] << endl;
    cout << *(vPtr + 4) << endl;
    cout << *(values + 4) << endl;
    cout << vPtr[4] << endl;

    // (i) What address is referenced by vPtr + 3? What value is stored at that location?
    //Address: 1002506; 8 is stored;
    cout << (vPtr + 3) << endl;
    cout << *(vPtr + 3) << endl;


    // (j) Assuming that vPtr points to values[ 4 ], what address is referenced by vPtr -= 4?
    //What value is stored at that location?

    //Address: 1002500; 2 is stored;

    unsigned int *temp = vPtr;
    cout << (vPtr -= 4) << endl;
    cout << *(temp -= 4) << endl;

}

// --- 8.10 --- Function Headers and Prototypes

//a
void zero (long int * bigIntegers);

//b)
void zero(long int *);

//c)
int add1AndSum (int * oneTooSmall);

//d)
int add1AndSum (int *)



// --- 8.11 ---

int main(){
    //a)
    int *number;
    cout << *number << endl; // number prints number's address
    //b)
    double *realPtr;
    long *integerPtr;
    *integerPtr = *realPtr; // it is not possible to assign address
    //c)
    int * x, y;
    * x = y; // or
    x = &y;
    //d))
    char s[] = "this is a character array";
    for ( ; *s != '\0'; ++*s)
        cout << *s << ' '; // pointer should be incremented
}

*/

























