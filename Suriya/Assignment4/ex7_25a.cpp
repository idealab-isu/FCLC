//Exercise 7.25(a)

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    int chess[8][8] = {};
    int horizontal[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int vertical[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int currentRow=3, currentColumn=3;
    int expRow=0, expColumn=0;
    int breaker1=1;
    int noOfMoves=0;
    int toMove;

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

    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            cout<<setw(5)<<chess[i][j];
        }
        cout<<endl;
    }

    cout<<"\nNo of moves: "<<noOfMoves;
}
