#include<iostream>

using namespace std;

void selectionSort(int [], int);

int main(){
    const int sortSize = 10;
    int toSort[sortSize] = {94, 3, 76, 35, 100, 1009, 45, 25, 701, 54};

    cout<<"Array before sorting: "<<endl;
    for (int p=0; p<sortSize; p++)
        cout<<toSort[p]<<" ";
    cout<<endl;

    selectionSort(toSort, sortSize);

    cout<<"Array after sorting: "<<endl;
    for (int p=0; p<sortSize; p++)
        cout<<toSort[p]<<" ";
    cout<<endl;
}

void selectionSort(int toSort[], int sortSize){
    if (sortSize==1);
    else {
        int smallest = toSort[0], temp, position=0;
        for (int i=0; i<sortSize; i++){
            if (toSort[i]<smallest) {
                smallest = toSort[i];
                position = i;
            }
        }

        temp = toSort[0];
        toSort[0] = smallest;
        toSort[position]=temp;

        const int newSize = sortSize-1;
        int* newArray = new int[newSize];
        for (int q=0; q<newSize; q++)
            newArray[q]=toSort[q+1];

        selectionSort(newArray, newSize);

        for (int r=1; r<sortSize; r++)
            toSort[r]=newArray[r-1];
    }
}