//Exercise 7.25(b)

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    int horizontal[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int vertical[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int currentRow=3, currentColumn=3;
    int expRow=0, expColumn=0;
    int breaker1=1;
    int noOfMoves=0;
    int toMove;

    int tourArray[1000] = {};

    for(int k=0; k<1000; k++) {
        srand(time(0));
        int chess[8][8] = {};
        noOfMoves = 0;
        for (int i = 0; i <= 64; i++) {
            for (int moveNumber = 0; moveNumber < 8; moveNumber++) {
                expRow = currentRow + vertical[moveNumber];
                expColumn = currentColumn + horizontal[moveNumber];
                if (expRow > 7 || expRow < 0 || expColumn > 7 || expColumn < 0 || chess[expRow][expColumn] != 0)
                    continue;
                else
                    breaker1 = 1;
            }

            if (breaker1 == 0)
                break;

            while (breaker1 != 0) {
                toMove = rand() % 8;
                expRow = currentRow + vertical[toMove];
                expColumn = currentColumn + horizontal[toMove];
                if (expRow > 7 || expRow < 0 || expColumn > 7 || expColumn < 0 || chess[expRow][expColumn] != 0)
                    continue;
                else {
                    currentRow = expRow;
                    currentColumn = expColumn;
                    chess[currentRow][currentColumn] = i;
                    noOfMoves = i;
                    breaker1 = 0;
                }
            }
        }

        tourArray[k]=noOfMoves;
    }

    cout<<"Length of thousand tours: "<<endl;
    for (int i=0; i<1000; i++){
        cout<<setw(5)<<tourArray[i];
        if (i%10==9)
            cout<<endl;
    }
}
//
// Created by Suriya Narayanan on 10/14/22.
//
