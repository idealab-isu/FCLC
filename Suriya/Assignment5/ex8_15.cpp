//Exercise 8.15

#include<iostream>
using namespace std;

void swapElements (int * , int *);
void quickSort(int [], const int, const int);

int main(){
    const int arraySize = 10;
    int toSort[arraySize] = {37, 2, 6, 4, 89, 8, 10, 12, 68, 45 };

    cout<<"Array before sorting: "<<endl;
    for ( int i=0; i<arraySize; i++)
        cout<< toSort[i] <<" ";
    cout<<endl;

    quickSort(toSort, 0, arraySize-1);

    cout<<"Array after sorting: "<<endl;
    for ( int i=0; i<arraySize; i++)
        cout<< toSort[i] <<" ";
    cout<<endl;
}

void quickSort(int toSort[],const int start, const int end){

    if ((end - start) >=2) {
        int j = start;
        int k = end + 1;
        int currentPosition = j;

        while (j <= k + 1 && k >= j + 1) {
            for (k = k - 1; k > j; k--) {
                if (toSort[k] < toSort[j]) {
                    swapElements(&toSort[k], &toSort[j]);
                    currentPosition = k;
                    break;
                }
            }
            for (j = j + 1; j < k; j++) {
                if (toSort[j] > toSort[k]) {
                    swapElements(&toSort[j], &toSort[k]);
                    currentPosition = j;
                    break;
                }
            }
        }
        quickSort(toSort, start, currentPosition - 1);
        quickSort(toSort, currentPosition + 1, end);
    }
}

void swapElements(int *const location1, int *const location2){
    int temp = *location1;
    *location1 = *location2;
    *location2 = temp;
}