//Exercise 7.37

#include<iostream>
using namespace std;

int recursiveMinimum(const int[], int, int);

int main(){
    const int arraySize = 10;
    int array[arraySize] = {94, 3, 76, 35, 100, 1009, 45, 1, 701, 54};

    cout<<"The minimum value found in the array: "<<recursiveMinimum(array,0,arraySize-1);
}

int recursiveMinimum(const int array[], int start, int end){
    if (start==end){
        return array[start];
    }

    else{
        if(array[start]>=array[end])
            return recursiveMinimum(array, start+1, end);
        if(array[start]<array[end])
            return recursiveMinimum(array, start, end-1);
    }
}

