#include "SparArray.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

SparArray::SparArray(int row, int column){
    setArrayDim(row, column);
}

void SparArray::setArrayDim(int row, int column) {
    row_dim = row;
    column_dim = column;
    size = 0;
}

void SparArray::setArray() {
    size = 0;
    cout<<"Enter "<< row_dim*column_dim << " numbers:" << endl;
    double *tempArr = new double [row_dim * column_dim];
    for (int i = 0; i < row_dim; i++) {
        for (int j = 0; j < column_dim; j++) {
            cin >> *(tempArr + i * column_dim + j);
            if (*(tempArr + i * column_dim + j)!=0)
                size++;
        }
    }

    if (size>0) {
        rowPtr = new int[size];
        columnPtr = new int[size];
        valuePtr = new double[size];

        *spar = rowPtr;
        *(spar+1) = columnPtr;
        *(spar+2) = valuePtr;

        int counter = 0;
        for (int i = 0; i < row_dim; i++) {
            for (int j = 0; j < column_dim; j++) {
                if (*(tempArr + i * column_dim + j) != 0) {
                    *(rowPtr + counter) = i;
                    *(columnPtr + counter) = j;
                    *(valuePtr + counter) = *(tempArr + i * column_dim + j);
                    counter++;
                }
            }
        }
    }

    if (size==0){
        size = 1;
        rowPtr = new int [size];
        columnPtr = new int [size];
        valuePtr = new double [size];
        *(rowPtr) = 0;
        *(columnPtr) = 0;
        *(valuePtr) = *(tempArr);
    }

    delete [] tempArr;
}

void SparArray::declareArray(const double * declare, int arrSize) {
    if (arrSize>1)
    {
        size = 0;
        for (int i = 0; i < arrSize; i++) {
            if (*(declare + i) != 0)
                size++;
        }

        rowPtr = new int[size];
        columnPtr = new int[size];
        valuePtr = new double[size];

        *spar = rowPtr;
        *(spar+1) = columnPtr;
        *(spar+2) = valuePtr;

        int counter = 0;
        int counter2 = 0;
        for (int i = 0; i < row_dim && counter2 < arrSize; i++) {
            for (int j = 0; j < column_dim && counter2 < arrSize; j++) {
                if (*(declare + i * column_dim + j) != 0) {
                    *(rowPtr + counter) = i;
                    *(columnPtr + counter) = j;
                    *(valuePtr + counter) = *(declare + i * column_dim + j);
                    counter++;
                }
                counter2++;
            }
        }
    }

    else if(arrSize == 1){
            size = 1;
            rowPtr = new int [size];
            columnPtr = new int [size];
            valuePtr = new double [size];
            *(rowPtr) = 0;
            *(columnPtr) = 0;
            *(valuePtr) = *(declare);
    }
}

void SparArray::printArray(){

    int counter = 0;
    for (int i=0; i < row_dim; i++){
        for (int j=0; j < column_dim; j++){
            if (*(rowPtr + counter)==i && *(columnPtr + counter)==j){
                    cout<<setw(5)<<*(valuePtr+counter);
                    counter++;
                }

            else
                cout<<setw(5)<<0;
        }
        cout<<endl;
    }
}

void SparArray::printCompact(){
    cout<<setw(5)<<"row"<<setw(5)<<"col"<<setw(10)<<"value"<<endl;
    for (int i=0; i<size; i++){
        cout<<setw(5)<<*(rowPtr+i)<<setw(5)<<*(columnPtr+i)<<setw(10)<<*(valuePtr+i)<<endl;
    }
}

double SparArray::getSparsity() {
    return 1.0 - getDensity();
}

double SparArray::getDensity() {
    return size/(row_dim*column_dim);
}

int SparArray::getRowDim() {
    return row_dim;
}

int SparArray::getColDim() {
    return column_dim;
}

int SparArray::getSize() {
    return size;
}

void ** SparArray::getArray() {
    return spar;
}

double SparArray::lNorm(int base) {
    double sum=0;
    for (int i=0; i<size; i++)
        sum = sum + pow(abs(*(valuePtr+i)),base);
    return pow(sum, 1.0/base);
}

double SparArray::l2Norm(){
    return lNorm(2);
}

double SparArray::infNorm() {
    double max = abs(*(valuePtr));
    for (int i=1; i<size; i++){
        if (abs((*valuePtr + i)) > max)
            max = abs(*(valuePtr + i));
    }
    return max;
}

double SparArray::getValue(int row_index, int col_index) {
    if (row_index<row_dim && col_index<column_dim){
        int temp = 0;
        for (int counter = 0; counter < size; counter++){
            if (*(rowPtr + counter) == row_index && *(columnPtr + counter) == col_index) {
                temp = *(valuePtr + counter);
                break;
            }

            if (*(rowPtr+counter) == row_index && *(columnPtr + counter) > col_index)
                break;

            if (*(rowPtr+counter) > row_index)
                break;
        }

        return temp;
    }

    else
        cout<<"Atleast one of the indices exceeds the matrix limit"<<endl;
}