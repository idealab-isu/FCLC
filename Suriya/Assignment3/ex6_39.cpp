//Exercise 6.39

#include<iostream>

using namespace std;

void towerOfHanoi(int, int, int, int);

int main(){
    towerOfHanoi(4,1,3,2);
}

void towerOfHanoi(int noOfDisks, int initialPeg, int targetPeg, int tempPeg){
    int noOfMoves=0;
    for (int i=1; i<=noOfDisks; i++){
        noOfMoves = 2 * noOfMoves + 1;
    }

    if(noOfDisks%2==0){
        int interChanger;
        interChanger=targetPeg;
        targetPeg=tempPeg;
        tempPeg=interChanger;
    }

    for (int j=1; j<=noOfMoves; j++){
        if(j%3==1)
            cout<<"Move disk from peg "<<initialPeg<<" to "<<targetPeg<<endl;
        if(j%3==2)
            cout<<"Move disk from peg "<<initialPeg<<" to "<<tempPeg<<endl;
        if(j%3==0)
            cout<<"Move disk from peg "<<tempPeg<<" to "<<targetPeg<<endl;
    }
}
