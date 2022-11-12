//Exercise 7.24(c)

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int chess[8][8] = {};
    int horizontal[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int vertical[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int currentRow=3, currentColumn=3;
    int expRow=0, expColumn=0;
    int finRow=0, finColumn=0;
    int breaker=1;
    int accessMin;
    int noOfMoves=0;

    int accessibility[8][8] = {{2, 3, 4, 4,4, 4, 3, 2 },
                               {3, 4, 6, 6,6, 6, 4, 3 },
                               {4, 6, 8, 8,8, 8, 6, 4 },
                               {4, 6, 8, 8,8, 8, 6, 4 },
                               {4, 6, 8, 8,8, 8, 6, 4 },
                               {4, 6, 8, 8,8, 8, 6, 4 },
                               {3, 4, 6, 6,6, 6, 4, 4 },
                               {2, 3, 4, 4,4, 4, 3, 4 },
    };

    chess[currentRow][currentColumn] = 0;
    for (int i=1; i<=64; i++){
        breaker=0;
        accessMin=9;
        for (int moveNumber=0; moveNumber<8; moveNumber++){
            expRow = currentRow+vertical[moveNumber];
            expColumn = currentColumn+horizontal[moveNumber];
            if(expRow>7 || expRow<0 || expColumn>7 || expColumn<0 || chess[expRow][expColumn]!=0)
                continue;
            else if(accessibility[expRow][expColumn]<accessMin) {
                accessMin = accessibility[expRow][expColumn];
                finRow = expRow;
                finColumn = expColumn;
                breaker = 1;
            }
        }

        if(breaker==0)
            break;

        currentRow = finRow;
        currentColumn = finColumn;
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
