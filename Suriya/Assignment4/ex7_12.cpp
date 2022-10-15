//Exercise 7.12

#include<iostream>
using namespace std;

int main() {
    const int arraySize = 10;
    int temp = 0, noOfSwaps = 1;
    int c[arraySize] = {5, 6, 3, 4, 3, 7, 8, 1, 7, 8};

    cout << "Array before bubble sorting algorithm: " << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << c[i] << " ";
        if (i == (arraySize - 1))
            cout << endl;
    }

    for (int k=0; k<(arraySize-1) && noOfSwaps!=0; k++){
        noOfSwaps = 0;
        for (int j=0; j<(arraySize-1-k); j++){
            if (c[j] > c[j+1]){
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
                noOfSwaps++;
            }
        }
    }

    cout<<"Array after bubble sorting algorithm: "<<endl;
    for (int i=0; i<arraySize; i++){
        cout<<c[i]<<" ";
        if (i==(arraySize-1))
            cout<<endl;
    }

}