//
// Created by Ronak Tali on 9/30/22.
//

#ifndef FIRST_PROJ_HW7_H
#define FIRST_PROJ_HW7_H

#endif //FIRST_PROJ_HW7_H

//Qs. 11, 12, 15, 18, 24, 25, 29, 30, 31, 33, 37, 40



int* bubbleSort(int inArray[]){
    int arrSize = sizeof(inArray);
    for(int i = 0; i <= arrSize; i++){
        for(int j = 0; j <= arrSize; j++){
            if(inArray[j] > inArray[j+1]){
                int t = inArray[j];
                inArray[j] = inArray[j+1];
                inArray[j+1] = t;
            }
        }
    }
    return inArray;
}

int* bubbleSortImprove(int inArray[]){
    int arrSize = sizeof(inArray);
    for(int i = 0; i <= arrSize; i++){
        int numSwaps = 0;
        for(int j = 0; j <= arrSize - i; j++){
            if(inArray[j] > inArray[j+1]){
                int t = inArray[j];
                inArray[j] = inArray[j+1];
                inArray[j+1] = t;
                numSwaps++;
            }
        }
        if(numSwaps == 0){
            break;
        }
    }
    return inArray;
}

void printVector(vector<int> const &a) {
    cout << "The vector elements are : ";
    for(int i=0; i < a.size(); i++)
        cout << a.at(i) << ' ';
}

vector<int> deDup(){
vector<int> storeNums;
int iCount = 0;
while(iCount < 20){
    int inputNumb;
    cout << "Enter a integer between 10 and 100 to store" << endl;
    cin >> inputNumb;
    if(10 <= inputNumb <= 100){
        iCount++;
        if (find(storeNums.begin(), storeNums.end(), inputNumb) == storeNums.end()){
            storeNums.push_back(inputNumb);
        }
    }
    else{
        cout << "Sorry, you need to enter an integer between 10 and 100" << endl;
    }
}
    return storeNums;
}

void eratosthenesPrime(){
int eratosthenes[1000] = {[0 ... 999] = 1};
for(int numb = 2; numb <= 999; numb++){
    for(int mult = 2; mult <= 1000/numb; mult++){
        if(numb*mult <= 999){
            eratosthenes[numb*mult] = 0;
        }
    }
}
int numPrimes = 0;
for(int k = 2; k <= 999; k++){
    if(eratosthenes[k] == 1){
        cout << k << " ";
        numPrimes++;
    }
}
cout << "\nTotal number of primes below 1000 found = " << numPrimes;
}




int linSearch(int inArray[], int size, int key){
    while(size >= 1){
        if(inArray[size-1] == key){
            return size - 1;
            break;
        }
        else {
            return (linSearch(inArray,size-1,key));
        }
    }
}


int recursiveMinimum(int inArray[], int startSubs, int endSubs){
while(startSubs != endSubs){
   return min(inArray[startSubs], recursiveMinimum(inArray,startSubs+1,endSubs));
}
}


int recursiveMinimumVect(vector<int> inVect, int startSubs, int endSubs){
    while(startSubs != endSubs){
        return min(inVect[startSubs], recursiveMinimumVect(inVect,startSubs+1,endSubs));
    }
}

int minIdx(int remainingArr[], int startIdx, int endIdx){
    int index = startIdx;

    for(int i = startIdx+1; i <= endIdx; i++)
    {
        if(remainingArr[i] < remainingArr[index])
            index = i;
    }
    return index;
}

void selectionSort(int inArray[], int size, int progressIdx){
    if(progressIdx < size){
        int curr_min = inArray[progressIdx];
        int remMinIdx = minIdx(inArray,progressIdx+1,size);
        if(inArray[remMinIdx] < curr_min){
            inArray[progressIdx] = inArray[remMinIdx];
            inArray[remMinIdx] = curr_min;
        }
        selectionSort(inArray, size,progressIdx+1);
    }
    else{
        return;
    }
}


void displayArray1d(int arr[], int arrSize){
    for(int i = 0; i < arrSize; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printVect(vector<int> inVect, int size){
    for(int y = 0; y < size; y++){
        cout << inVect[y] << " ";
    }
    cout << endl;
}

void displayArray2d(int arr[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void bucketSort2(int inArray[], int arrSize, int max_int_size, bool printOn = false){

    //Create 2d Vector bucket
    //vector<vector<int>> buckets(10, vector<int>(arrSize)); //Initializing a 2d Vector with all zeros.
    //Define Buckets
    vector<int> bucket0;
    vector<int> bucket1;
    vector<int> bucket2;
    vector<int> bucket3;
    vector<int> bucket4;
    vector<int> bucket5;
    vector<int> bucket6;
    vector<int> bucket7;
    vector<int> bucket8;
    vector<int> bucket9;

    //Store Bucket Sizes at each iteration

    int size0;
    int size1;
    int size2;
    int size3;
    int size4;
    int size5;
    int size6;
    int size7;
    int size8;
    int size9;

    int rnow;
    int rpast;

    int power10[2] = {10,100};

    for(int numer = 1; numer <= max_int_size; numer++) {
        for (int pos = 0; pos < arrSize; pos++) {
            //Distribute
            int marker = (inArray[pos]) % (power10[numer - 1]);
            switch (marker) {
                case 0:
                    bucket0.push_back(inArray[pos]);
                    break;

                case 1:
                    bucket1.push_back(inArray[pos]);
                    break;

                case 2:
                    bucket2.push_back(inArray[pos]);
                    break;

                case 3:
                    bucket3.push_back(inArray[pos]);
                    break;

                case 4:
                    bucket4.push_back(inArray[pos]);
                    break;

                case 5:
                    bucket5.push_back(inArray[pos]);
                    break;

                case 6:
                    bucket6.push_back(inArray[pos]);
                    break;

                case 7:
                    bucket7.push_back(inArray[pos]);
                    break;

                case 8:
                    bucket8.push_back(inArray[pos]);
                    break;

                case 9:
                    bucket9.push_back(inArray[pos]);
                    break;
            }
        }


        //Collect Bucket Sizes
        size0 = bucket0.size();
        size1 = bucket1.size();
        size2 = bucket2.size();
        size3 = bucket3.size();
        size4 = bucket4.size();
        size5 = bucket5.size();
        size6 = bucket6.size();
        size7 = bucket7.size();
        size8 = bucket8.size();
        size9 = bucket9.size();

        if (printOn) {
            cout << "Printing Buckets" << endl;
            printVect(bucket0, size0);
            printVect(bucket1, size1);
            printVect(bucket2, size2);
            printVect(bucket3, size3);
            printVect(bucket4, size4);
            printVect(bucket5, size5);
            printVect(bucket6, size6);
            printVect(bucket7, size7);
            printVect(bucket8, size8);
            printVect(bucket9, size9);
            cout << "Printing Buckets End" << endl;

        }

        //Gather back

        rnow = 0;
        if (size0 > 0) {
            for (int r0 = rnow; r0 < rnow + size0; r0++) {
                inArray[r0] = bucket0[r0];
            }
        }
        rnow = rnow + size0;
        rpast = size0;

        if (size1 > 0) {
            for (int r1 = rnow; r1 < rnow + size1; r1++) {
                inArray[r1] = bucket1[r1 - rpast];
            }
        }

        rnow = rnow + size1;
        rpast = size0 + size1;

        if (size2 > 0) {
            for (int r2 = rnow; r2 < rnow + size2; r2++) {
                inArray[r2] = bucket2[r2 - rpast];
            }
        }

        rnow = rnow + size2;
        rpast = size0 + size1 + size2;

        if (size3 > 0) {
            for (int r3 = rnow; r3 < rnow + size3; r3++) {
                inArray[r3] = bucket3[r3 - rpast];
            }
        }

        rnow = rnow + size3;
        rpast = size0 + size1 + size2 + size3;

        if (size4 > 0) {
            for (int r4 = rnow; r4 < rnow + size4; r4++) {
                inArray[r4] = bucket4[r4 - rpast];
            }
        }

        rnow = rnow + size4;
        rpast = size0 + size1 + size2 + size3 + size4;

        if (size5 > 0) {
            for (int r5 = rnow; r5 < rnow + size5; r5++) {
                inArray[r5] = bucket5[r5 - rpast];
            }
        }


        rnow = rnow + size5;
        rpast = size0 + size1 + size2 + size3 + size4 + size5;

        if (size6 > 0) {
            for (int r6 = rnow; r6 < rnow + size6; r6++) {
                inArray[r6] = bucket6[r6 - rpast];
            }
        }

        rnow = rnow + size6;
        rpast = size0 + size1 + size2 + size3 + size4 + size5 + size6;

        if (size7 > 0) {
            for (int r7 = rnow; r7 < rnow + size7; r7++) {
                inArray[r7] = bucket7[r7 - rpast];
            }
        }

        rnow = rnow + size7;
        rpast = size0 + size1 + size2 + size3 + size4 + size5 + size6 + size7;

        if (size8 > 0) {
            for (int r8 = rnow; r8 < rnow + size8; r8++) {
                inArray[r8] = bucket8[r8 - rpast];
            }
        }

        rnow = rnow + size8;
        rpast = size0 + size1 + size2 + size3 + size4 + size5 + size6 + size7 + size8;

        if (size9 > 0) {
            for (int r9 = rnow; r9 < rnow + size9; r9++) {
                inArray[r9] = bucket9[r9 - rpast];
            }
        }

        //Reprint the Array after every round
        cout << "\n Reprinting Array after every round\n";
        displayArray1d(inArray,10);

        //Clear all Vectors
        bucket0.clear();
        bucket1.clear();
        bucket2.clear();
        bucket3.clear();
        bucket4.clear();
        bucket5.clear();
        bucket6.clear();
        bucket7.clear();
        bucket8.clear();
        bucket9.clear();


    } //End Precision

}//End Bucket Sort






/*
 * Chess Board Problems
 *
 */

int randomPickVector(vector<int> inVect, int vectSize){
    srand(time(0));
    int randomPosition = rand() % vectSize;
    return inVect[randomPosition];
}


int printChessBoard(int Board[8][8], bool printBoard = false, bool stepsPrint = true){
    int totalVisited = 0;

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if(printBoard) {
                    cout << Board[i][j] << "  ";
                }
                totalVisited = totalVisited + Board[i][j];
            }
            if(printBoard) {
                cout << endl;
            }
        }
        if(stepsPrint) {
            cout << "\n Total Square Visited = " << totalVisited << endl;
        }
        if(totalVisited == 64) {
            for (int t = 0; t < 8; t++) {
                for (int s = 0; s < 8; s++) {
                    cout << Board[t][s] << "  ";
                }
                cout << endl;
            }
        }

    return totalVisited;
}


int legalMoveChessKnight(int x0, int y0, int Board[8][8], int H[8], int V[8], bool useHeurestics=false, bool lookIntoFuture = false) {
    if (useHeurestics) {
        for (int moveType = 0; moveType < 8; moveType++) {
            int nextX = x0 + H[moveType]; //Column movement
            int nextY = y0 + V[moveType]; //Row Movement
            if ((nextX <= 7) && (nextY <= 7) && (nextX >= 0) &&
                (nextY >= 0)) { //Check if the proposed move is legal i.e. falls inside the Chess Board?
                if (Board[nextX][nextY] == 0) { //Check if the newly proposed position is available?
                    return moveType;
                    break;
                }
            }
        }
        return -1; //No Legal Move from Current Position.
    } else {
        //Encode Heurestics
        int heur[8][8] = {
                {2, 3, 4, 4, 4, 4, 3, 2},
                {3, 4, 6, 6, 6, 6, 4, 3},
                {4, 6, 8, 8, 8, 8, 6, 4},
                {4, 6, 8, 8, 8, 8, 6, 4},
                {4, 6, 8, 8, 8, 8, 6, 4},
                {4, 6, 8, 8, 8, 8, 6, 4},
                {3, 4, 6, 6, 6, 6, 4, 3},
                {2, 3, 4, 4, 4, 4, 3, 2}

        };

        //We first scan the sorrounding to find out which moves are possible and what move has what weight

        vector<int> moveWeight2;
        vector<int> moveWeight3;
        vector<int> moveWeight4;
        vector<int> moveWeight6;
        vector<int> moveWeight8;

        for (int moveType = 0; moveType < 8; moveType++) {
            int nextX = x0 + H[moveType]; //Column movement
            int nextY = y0 + V[moveType]; //Row Movement
            if ((nextX <= 7) && (nextY <= 7) && (nextX >= 0) && (nextY >= 0)) {
                switch (heur[nextX][nextY]) {
                    case 2:
                        moveWeight2.push_back(moveType);
                        break;
                    case 3:
                        moveWeight3.push_back(moveType);
                        break;
                    case 4:
                        moveWeight4.push_back(moveType);
                        break;
                    case 6:
                        moveWeight6.push_back(moveType);
                        break;
                    case 8:
                        moveWeight8.push_back(moveType);
                        break;
                }
            }

        }

        //Move order decided by Heurestics....
        if (!lookIntoFuture) { //Running Part (c)

            // We now have a sense of our sorrounding. We can use this knowledge to pick the best move
            if (moveWeight2.size() + moveWeight3.size() + moveWeight4.size() + moveWeight6.size() +
                moveWeight8.size() == 0) {
                return -1;
            } else {
                if (moveWeight2.size() >= 1) {
                    int totalAvailable = moveWeight2.size();
                    return randomPickVector(moveWeight2, totalAvailable);

                } else {
                    if (moveWeight3.size() >= 1) {
                        int totalAvailable = moveWeight3.size();
                        return randomPickVector(moveWeight3, totalAvailable);
                    } else {
                        if (moveWeight4.size() >= 1) {
                            int totalAvailable = moveWeight4.size();
                            return randomPickVector(moveWeight4, totalAvailable);
                        } else {
                            if (moveWeight6.size() >= 1) {
                                int totalAvailable = moveWeight6.size();
                                return randomPickVector(moveWeight6, totalAvailable);
                            } else {
                                int totalAvailable = moveWeight8.size();
                                return randomPickVector(moveWeight8, totalAvailable);
                            } // End Checking 8
                        } //End Checking 6
                    } //End Checking 4
                } //End Checking 2
            } //End Big Block

        } // End Part (c) - Heurestics Move
        else { //Running Part d

            // We now have a sense of our sorrounding. We can use this knowledge to pick the best move
            if (moveWeight2.size() + moveWeight3.size() + moveWeight4.size() + moveWeight6.size() +
                moveWeight8.size() == 0) {
                return -1;
            } else {
                if (moveWeight2.size() >= 1) {
                    if (moveWeight2.size() == 1) {
                        return moveWeight2[0];
                    } else {
                        //Call Part - c again from part d. => Looking one step further into future.
                        //int r = legalMoveChessKnight(x0, y0, Board[8][8], H[8], V[8], true, false);
                    }

                } else {

                    if (moveWeight3.size() >= 1) {

                        if (moveWeight3.size() == 1) {
                            return moveWeight3[0];
                        } else {
                            int totalAvailable = moveWeight3.size();
                            return randomPickVector(moveWeight3, totalAvailable);
                        }
                    } else {
                        if (moveWeight4.size() >= 1) {

                            if (moveWeight4.size() == 1) {
                                return moveWeight4[0];
                            } else {
                                int totalAvailable = moveWeight4.size();
                                return randomPickVector(moveWeight4, totalAvailable);
                            }
                        } else {
                            if (moveWeight6.size() >= 1) {

                                if (moveWeight6.size() == 1) {
                                    return moveWeight6[0];
                                } else {
                                    int totalAvailable = moveWeight6.size();
                                    return randomPickVector(moveWeight6, totalAvailable);
                                }
                            } else {
                                if (moveWeight8.size() == 1) {
                                    return moveWeight8[0];
                                } else {
                                    int totalAvailable = moveWeight8.size();
                                    return randomPickVector(moveWeight8, totalAvailable);
                                } // End Checking 8
                            } //End Checking 6
                        } //End Checking 4
                    } //End Checking 2
                } //End Big Block

            } //End Part d

        } // If Heurestics requested

    }
}

void knightsTour(int x , int y, char problemType = 'b' ){ //Here x,y indicate the current position of the knight in the eight by eight chess board.

    //Define ChessBoard
    int chessBoard[8][8] = {0};

    //Track move counter
    int moveCounter = 0;

    //Encode Moves
    int H[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int V[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

    //Part - b

    if(problemType == 'b') {
        //Mark the starting square as visited.
        chessBoard[x][y] = 1;
        cout << "Start Position of the Knight : X = " << x << " ,Y = " << y << endl;

        while (moveCounter < 64) {
            int nextMove = legalMoveChessKnight(x, y, chessBoard, H, V);
            if (nextMove > -1) {
                x = x + H[nextMove];
                y = y + V[nextMove];
                chessBoard[x][y] = 1; //Mark as visited
                cout << "New Position of the Knight : X = " << x << " ,Y = " << y << endl;
                moveCounter++;
            } else {
                break;
            }
        }
        int receiveTotalVisited = printChessBoard(chessBoard); //Print Final Position

    } else {

        if(problemType == 'c'){
            //Part - c

            //Mark the starting square as visited.
            chessBoard[x][y] = 1;

            cout << "Start Position of the Knight : X = " << x << " ,Y = " << y << endl;

            while (moveCounter < 64) {
                int nextMove = legalMoveChessKnight(x, y, chessBoard, H, V,true);
                if (nextMove > -1) {
                    x = x + H[nextMove];
                    y = y + V[nextMove];
                    chessBoard[x][y] = 1; //Mark as visited
                    //cout << "New Position of the Knight : X = " << x << " ,Y = " << y << endl;
                    moveCounter++;
                } else {
                    break;
                }
            }
            int receiveTotalVisited2 = printChessBoard(chessBoard); //Print Final Position


        } else{
            //Part - d
            chessBoard[x][y] = 1;

            cout << "Start Position of the Knight : X = " << x << " ,Y = " << y << endl;

            while (moveCounter < 64) {
                int nextMove = legalMoveChessKnight(x, y, chessBoard, H, V,true, true);
                if (nextMove > -1) {
                    x = x + H[nextMove];
                    y = y + V[nextMove];
                    chessBoard[x][y] = 1; //Mark as visited
                    cout << "New Position of the Knight : X = " << x << " ,Y = " << y << endl;
                    moveCounter++;
                } else {
                    break;
                }
            }
            int receiveTotalVisited3 = printChessBoard(chessBoard, false,true); //Print Final Position

        }

    }

}


/*
 *  Random Chess Moves
 *
 */



int legalMoveChessKnightRandom(int x0, int y0, int Board[8][8], int H[8], int V[8], bool useRandom=true) {

    int moves[] = {0,1,2,3,4,5,6,7};

    //Fisher Yates Algorithm to sort an array
    for (int i = 7; i != 0; i--) {
        int j = rand() % 8;
        //Swap
        int temp = moves[i];
        moves[i] = moves[j];
        moves[j] = temp;
    }

    if (useRandom) {
        for (int moveType = 0; moveType < 8; moveType++) {
            int nextX = x0 + H[moves[moveType]]; //Column movement
            int nextY = y0 + V[moves[moveType]]; //Row Movement
            if ((nextX <= 7) && (nextY <= 7) && (nextX >= 0) && (nextY >= 0)) { //Check if the proposed move is legal i.e. falls inside the Chess Board?
                if (Board[nextX][nextY] == 0) { //Check if the newly proposed position is available?
                    return moves[moveType];
                    break;
                }
            }
        }
        return -1; //No Legal Move from Current Position.
    }
}


int knightsTourBrute(int x, int y){

    //Define ChessBoard
    int chessBoard[8][8] = {0};

    //Track move counter
    int moveCounter = 0;

    //Encode Moves
    int H[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int V[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

    chessBoard[x][y] = 1;
    //cout << "Start Position of the Knight : X = " << x << " ,Y = " << y << endl;

    while (moveCounter <= 64) {
        int nextMove = legalMoveChessKnightRandom(x, y, chessBoard, H, V);
        if (nextMove > -1) {
            x = x + H[nextMove];
            y = y + V[nextMove];
            chessBoard[x][y] = 1; //Mark as visited
            moveCounter++;
        } else {
            break;
        }
    }
    return printChessBoard(chessBoard, false, false); //Print Final Position
}

void monteCarloKnightsTour(int numSimulations = 10000000){
    vector<int> tourLog;
    for(int r = 0; r < numSimulations; r++){
        //Pick a random point x_0, y_0
        int x0 = rand() % 8;
        int y0 = rand() % 8;

        //Initiate a brute force Knights tour
        int stepLength = knightsTourBrute(x0, y0);
        //cout << "Length of the Tour for simulation " << r << " started at (" << x0 << "," << y0 << ") = " << stepLength <<" ." << endl;
        tourLog.push_back(stepLength);

        //If tour length is 63. Record it
        if(stepLength == 64){
            cout << "Tour Started from X = (" << x0 << " ," << y0 << ")" << endl;
            cout << "FULL TOUR FOUND AT ITERATION = " << r << endl;
            break;
        }
    }
}