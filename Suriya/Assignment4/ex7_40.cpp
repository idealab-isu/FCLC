//Exercise 7.40

#include<iostream>
#include<vector>

using namespace std;

int recursiveMinimum(const vector<int>&, int, int);

int main(){
    vector <int> array{94, 3, 76, 35, 100, 1009, 45, 1, 701, 54};

    cout<<"The minimum value found in the array: "<<recursiveMinimum(array,0,array.size()-1);
}

int recursiveMinimum(const vector<int>&array, int start, int end){
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