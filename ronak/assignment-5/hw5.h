//
// Created by Ronak Tali on 10/7/22.
//

#ifndef FIRST_PROJ_HW5_H
#define FIRST_PROJ_HW5_H

#endif //FIRST_PROJ_HW5_H
using  namespace  std;

void drawMaze(int inMaze[12][12]){
    for(int t = 0; t < 12; t++){
        for(int s = 0; s < 12; s++){
            cout << inMaze[t][s] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool isExit(int inMaze[12][12], int pos[]){
    if(inMaze[pos[0]][pos[1]] == 9){
        return true;
    } else{
        return false;
    }
}

bool isObstacle(int inMaze[12][12], int pos[]){
    if(inMaze[pos[0]][pos[1]] == 0){
        return true;
    } else{
        return false;
    }
}

bool isAvailable(int inMaze[12][12], int pos[]){
    if((inMaze[pos[0]][pos[1]] == 1) or (inMaze[pos[0]][pos[1]] == -1)){
        return true;
    } else{
        return false;
    }
}


int calcPtrOffsetAddress(int ith, int jth){
    return (ith * 12 + jth)*4;
}

int* rotateBack(int invect[]){ //Gives New Direction Vector
    int reverseVect[2] = {-1*invect[0], -1*invect[1]};
    return reverseVect;
}

int* rotateRight(int invect[]){ //Gives New Direction Vector
    int rightVect[2] = {-1*invect[1], invect[0]};
    return rightVect;
}

int* takeForwardStep(int dirVector[], int pos[], bool willPrint = false){ //Takes one step forward in the Direction.
    int newPos[] = {pos[0]+dirVector[0], pos[1]+dirVector[1]};
    if(willPrint) {
        cout << "Now at x = " << newPos[0] << ", y = " << newPos[1] << endl;
    }
    return newPos;
}

void mazeTraverse(int maze[12][12], int pos0[]){

    int dVect[2] = {0,1}; //Starting Direction Vector Pointing Upwards i.e. North.
    int* dir = dVect;
    int* currPos = pos0 ;

    while (!isExit(maze,currPos)){

        while(isAvailable(maze,takeForwardStep(dir,currPos))){
            int* newPos = takeForwardStep(dir,currPos, true);
            currPos = newPos;
        }
        if(!isExit(maze,currPos)){
            dir = rotateBack(dir);

            int* newPosBack = takeForwardStep(dir,currPos);
            currPos = newPosBack;

            int* dirTemp = rotateRight(dir);
            if(isAvailable(maze, takeForwardStep(dirTemp,currPos))){

            }
        }

    }

    cout << "===================================================";
    cout << "Exited Successfully from x = " << currPos[0] << ", y = " << currPos[1] << endl;
    cout << "===================================================";
}


void swap(int arr[] , int pos1, int pos2){
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

int partition(int arr[], int low, int high, int pivot){
    int i = low;
    int j = low;
    while( i <= high){
        if(arr[i] > pivot){
            i++;
        }
        else{
            swap(arr,i,j);
            i++;
            j++;
        }
    }
    return j-1;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivot = arr[high];
        int pos = partition(arr, low, high, pivot);

        quickSort(arr, low, pos-1);
        quickSort(arr, pos+1, high);
    }
}

