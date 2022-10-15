//Exercise 7.24(b)

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int chess[8][8] = {};
    int horizontal[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int vertical[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int currentRow=3, currentColumn=3;
    int expRow=0, expColumn=0;
    int breaker=1, breaker1=1;
    int noOfMoves=0;

    for (int i=1; i<=64 && breaker1!=0; i++){
        breaker1=0;
        breaker=0;
        for (int moveNumber=0; moveNumber<8 && breaker==0; moveNumber++){
            expRow = currentRow+vertical[moveNumber];
            expColumn = currentColumn+horizontal[moveNumber];
            if(expRow>7 || expRow<0 || expColumn>7 || expColumn<0 || chess[expRow][expColumn]!=0)
                continue;
            else {
                currentRow = expRow;
                currentColumn = expColumn;
                breaker = 1;
                breaker1++;
            }
        }

        if(breaker1==0)
            break;

        chess[currentRow][currentColumn] = i;
        noOfMoves = i;
    }

    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            cout<<setw(5)<<chess[i][j];
        }
        cout<<endl;
    }

    cout<<"\nNo of moves: "<<noOfMoves;
}
