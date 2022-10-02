//Exercise 6.38

#include<iostream>
using namespace std;

void towerOfHanoi(int, int, int, int);

int main(){
    towerOfHanoi(4,1,3,2);
}

void towerOfHanoi(int noOfDisks, int initialPeg, int targetPeg, int tempPeg){
    if (noOfDisks==1)
        cout<<"Move disk from peg "<< initialPeg <<" to "<< targetPeg << endl;
    if (noOfDisks>1){
        towerOfHanoi(noOfDisks-1,initialPeg,tempPeg,targetPeg);
        cout<<"Move disk from peg "<< initialPeg <<" to "<< targetPeg << endl;
        towerOfHanoi(noOfDisks-1,tempPeg,targetPeg,initialPeg);
    }
}