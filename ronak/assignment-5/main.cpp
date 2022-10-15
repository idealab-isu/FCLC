#include <iostream>
#include <stdlib.h>
#include <vector>
#include <cmath>
#include <ctime>
#include "TowerHanoi.h"
#include "HW7.h"
#include <math.h>
#include <stack>
#include "bucket.h"
#include "hw5.h"

using namespace std;

void zero(long int bigIntegers[]){}
int add1AndSum(int oneTooSmall[]){

}

int main() {

    //HW-5

    //8, 10, 11, 13, 14, 15, 16

    /*8.8
    unsigned int values[5] = {2,4,6,8,10};
    unsigned int* vPtr;
    for(int _i = 0; _i < 5; _i++ ){
        cout << values[_i] << " ";
    }

    vPtr = values;
    vPtr = &values[0];

    for(int _i = 0; _i < 5; _i++ ){
        cout << *(vPtr+_i) << " ";
    }

    for(int _i = 0; _i < 5; _i++ ){
        cout << *(values+_i) << " ";
    }

    for(int _i = 0; _i < 5; _i++ ){
        cout << vPtr[_i] << " ";
    }

    int elem5 = values[4];
    elem5 = *(values+4);
    elem5 = vPtr[4];
    elem5 = *(vPtr+4);

    //Position of 4th Elem, integer 8 is stored here

    //address of 1st element, integer 2 is stored there.
    */

    /*8.10 */

    void zero(long int bigIntegers[]);
    int add1AndSum(int oneTooSmall[]);

    /* 8.11

    int *number;
    cout << number << endl; // Error - Number is not initialized. Printing a junk value. Remedy - Drop the *.

    double *realPtr;
    long *integerPtr;
    integerPtr = (long*)realPtr; // Pointer types are incompatible. Remedy - cast one of the pointers.

    int *x, *y;
    x = y; // Remedy - Initialize both as pointers.

    char s[] = "this is a character array";
    char* cPtr = s;
    for (cPtr = s ; *cPtr != '\0'; cPtr++) //trying to increment the char array by adding a number. Use a Pointer to array instead.
        cout << *cPtr << ' ';

    short *numPtr, result;
    void *genericPtr = numPtr;
    result = *(int*)genericPtr + 7; // Remedy - Need to cast the void pointer.


    double u = 19.34;
    double* xPtr = &u; // Missing Pointer. Remedy - Add * before xPtr
    cout << xPtr << endl;

    */


    /* 8.13 */
    //Concatenates two strings.

    /* 8.14 */
    //Counts number of characters in a string.

    /* 8.15
    int myArray[] = {7,8,3,2,10};
    quickSort(myArray, 0 , 4);
    cout << "Sorted Output = ";
    for( int i = 0 ; i < 5; i++){
        cout << myArray[i] << " ";
    }

    */

    /* 8.16 */
    int maze[12][12] = {
            {0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,1,1,0,1,1,1,1,1,1,0},
            {9,1,0,1,0,1,0,0,0,0,1,0},
            {0,0,0,1,0,1,1,1,1,0,1,0},
            {0,1,1,1,1,0,0,0,1,0,1,9},
            {0,0,0,0,1,0,1,0,1,0,1,0},
            {0,1,1,0,1,0,1,0,1,0,1,0},
            {0,0,1,0,1,0,1,0,1,0,1,0},
            {0,1,1,1,1,1,1,1,1,0,1,0},
            {0,0,0,0,0,0,1,0,0,0,1,0},
            {0,1,1,1,1,1,1,0,1,1,1,0},
            {0,0,0,0,0,0,0,0,0,0,0,0}
    }; //Define the Maze Start Position.

    //drawMaze(maze);

    int pos0[2] = {4,1};
    //mazeTraverse(maze,pos0);

    return 0;
}