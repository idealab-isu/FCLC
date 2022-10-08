#include <iostream>
#include <stdlib.h>
#include <vector>
#include <cmath>
#include <ctime>
#include "TowerHanoi.h"
#include "HW7.h"
#include <math.h>
#include <stack>

using namespace std;


int main() {


    // HW - 4 //

    /* 7.11 */
    int myArray[10] = {3,7,9,0,1,2,6,4,8,5};
    int *p = bubbleSort(myArray);
    for ( int i = 0; i < 10; i++ ) {
        cout << *(p + i) << ",";
    }
    

    /* 7.12 */
    int myArray[10] = {3,7,9,0,1,2,6,4,8,5};
    int *p = bubbleSortImprove(myArray);
    for ( int i = 0; i < 10; i++ ) {
        cout << *(p + i) << ",";
    }

    

    //printVector(deDup()); //Q 7.15

    /* Q 7.18 */
    // The program adds all numbers in the input array.

    /* 7.24 */
    knightsTour(0,0); //Part (b)

    //Part (c)

    knightsTour(8,8,'c');

    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            knightsTour(i,j,'c');
        }
    }
    


    /* 7.25 */

    cout << knightsTourBrute(0,0); //Part(a)
    monteCarloKnightsTour(); //Part(b)


    eratosthenesPrime(); //Q. 7.29


    /* 7.31 */
    int sortArray[10] = {3,7,9,0,1,2,6,4,8,5};
    selectionSort(sortArray,10,0);
    for ( int i = 0; i < 10; i++ ) {
        cout << sortArray[i] << ",";
    }
    

    /* 7.33 */
    int myArray[10] = {3,7,9,0,1,2,6,4,8,5};
    int key = 0;
    cout << linSearch(myArray,10,key);

    

    /* 7.37 */
    int myArray[10] = {3,7,9,0,1,2,6,4,8,5};
    cout << recursiveMinimum(myArray,0,9);

    

    /* 7.40 */
    vector<int> myVector = {3,7,9,0,1,2,6,4,8,5};
    cout << recursiveMinimumVect(myVector,0,9);
    

    return 0;
}