//Exercise 7.30

#include<iostream>
#include<cmath>

using namespace std;

void bucketSort(int [], int);

int main(){
    const int sortSize = 10;
    int toSort[sortSize] = {94, 3, 76, 35, 100, 1009, 45, 25, 701, 54};

    cout<<"Array before sorting: "<<endl;
    for (int p=0; p<sortSize; p++)
        cout<<toSort[p]<<" ";
    cout<<endl;

    int largestNumber=-1;
    for (int p=0; p<sortSize; p++){
        if (toSort[p]>largestNumber)
            largestNumber=toSort[p];
    }

    int dummy=largestNumber, noOfDigits = 0;
    do{
        noOfDigits++;
        dummy = dummy/10;
    }while (dummy!=0);

    for (int i=1; i<=noOfDigits; i++)
        bucketSort(toSort, sortSize);

    cout<<"Array after sorting: "<<endl;
    for (int p=0; p<sortSize; p++)
        cout<<toSort[p]<<" ";
    cout<<endl;

}

void bucketSort(int toSort[], int sortSize){
    static int passNumber = 1;
    const int bucketSize = sortSize;
    int** bucket = new int*[10];
    for(int j = 0; j < 10; j++){
        bucket[j] = new int[bucketSize];
        for (int k = 0; k<bucketSize; k++)
            bucket[j][k]=-1;
    }

    int row, column;

    int modOperator = pow(10,passNumber);
    int divider = pow(10,passNumber-1);

    for(int i=0; i<bucketSize; i++){
        column = i;
        row = toSort[i]%modOperator;
        row = row/divider;
        bucket[row][column]=toSort[i];
    }

    int counter1=-1;
    for(int l=0; l<10 && counter1<bucketSize; l++){
        for(int m=0; m<bucketSize && counter1<bucketSize; m++){
            if(bucket[l][m]!=-1){
                counter1++;
                toSort[counter1]=bucket[l][m];
            }
        }
    }

    passNumber++;
}