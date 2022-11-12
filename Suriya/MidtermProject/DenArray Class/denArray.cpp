#include <iostream>
#include <iomanip>
#include <cmath>
#include "denArray.h"

using namespace std;

denArray::denArray (int row, int column){
        setArrayDim(row,column);
}

void denArray::setArrayDim(int row,int column){
        row_dim = row;
        column_dim = column;
        arr = new double[row_dim * column_dim];
}

int denArray::getRowDim(){
    return row_dim;
}

int denArray::getColDim(){
    return column_dim;
}

int denArray::getLength(){
    return row_dim * column_dim;
}

double * denArray::getArray(){
    return arr;
}

void denArray::setArray(){
    cout<<"Enter "<< row_dim*column_dim << " numbers:" << endl;
    for (int i = 0; i < row_dim; i++) {
        for (int j = 0; j < column_dim; j++) {
            cin >> *(arr + i * column_dim + j);
        }
    }
}

void denArray::declareArray(const double *declare, const int size) {
    int counter = 0;
    for (int i = 0; i < row_dim; i++) {
        for (int j = 0; j < column_dim; j++) {
            if (counter<size) {
                *(arr + i * column_dim + j) = *(declare + counter);
                counter++;
            }
            else
                *(arr + i * column_dim + j) = 0;
        }
    }
}


void denArray::printArray(){
    for (int i = 0; i < row_dim; i++) {
        for (int j = 0; j < column_dim; j++) {
            cout<<setw(5)<<*(arr + i * column_dim + j);
        }
    cout<<endl;
    }
}

double denArray::lNorm(int base){
    double norm = 0;
    for (int i = 0; i < row_dim; i++) {
        for (int j = 0; j < column_dim; j++) {
            norm = norm + pow(abs(*(arr + i * column_dim + j)),base);
        }
    }
    return pow(norm, 1.0/base);
}

double denArray::l2Norm(){
    return lNorm(2);
}

double denArray::infNorm() {
    double max = 0;
    for (int i = 0; i < row_dim; i++) {
        for (int j = 0; j < column_dim; j++) {
            if(abs(*(arr + i * column_dim + j))>max)
                max = abs(*(arr + i * column_dim + j));
        }
    }
    return max;
}