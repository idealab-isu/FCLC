//Exercise 8.11

#include<iostream>
using namespace std;

int main(){
    //a) the pointer variable 'number' points towards an arbitrary variable.
    //it has to be initialised to zero or some variable of 'int' data type

    int *number=0;
    cout << *number <<endl;

    //b) 'double' data type realPtr in assigned to a pointer pointing a variable of 'long' data type.
    //it is an error

    double *realPtr;
    double *integerPtr;
    integerPtr = realPtr;

    //c) assigns a non-pointer variable to a pointer variable
    int *x, y;
    x = &y;

    //d) result is a short data type variable whereas genericPtr points to address of numPtr
    // while numPtr is a ptr variable itself. assigning address to a variable is an error
    //short *numPtr, result;
    //void *genericPtr = &numPtr;
    //result = *genericPtr + 7;

    //e) xPtr is not declared as a pointer variable
    double x1 = 19.34;
    double *x1Ptr = &x1;
    cout << x1Ptr << endl;

}
