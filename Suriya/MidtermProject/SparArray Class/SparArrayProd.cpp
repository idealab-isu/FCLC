#include "SparArray.h"
#include <iostream>
using namespace std;

SparArrayProd::SparArrayProd(SparArray A, SparArray B) {
    if (A.getColDim() == B.getRowDim()){
        prod = SparArray(A.getRowDim(), B.getColDim());
        product(A,B);
    }

    else
        cout<<"Array dimensions do not conform for matrix multiplication"<<endl;
}

void SparArrayProd::product(SparArray A, SparArray B){
    int rowA = A.getRowDim();
    int columnA = A.getColDim();
    int columnB = B.getColDim();

    double sum = 0;
    double * arrayC = new double [rowA*columnB];

    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < columnB; j++) {
            sum = 0;
            for (int k = 0; k < columnA; k++)
                sum = sum + A.getValue(i,k) * B.getValue(k,j);
            *(arrayC + i * columnB + j) = sum;
        }
    }

    prod.declareArray(arrayC,rowA*columnB);

    delete [] arrayC;
}

void SparArrayProd::printArray(){
    prod.printArray();
}

void SparArrayProd::printCompact(){
    prod.printCompact();
}

double SparArrayProd::getSparsity() {
    return prod.getSparsity();
}

double SparArrayProd::getDensity() {
    return prod.getDensity();
}

double SparArrayProd::getValue(int row_index, int col_index){
    return prod.getValue(row_index, col_index);
}

int SparArrayProd::getRowDim() {
    return prod.getRowDim();
}

int SparArrayProd::getColDim() {
    return prod.getColDim();
}

int SparArrayProd::getSize() {
    return prod.getSize();
}

void ** SparArrayProd::getArray() {
    return prod.getArray();
}

double SparArrayProd::lNorm(int base) {
    return prod.lNorm(base);
}

double SparArrayProd::l2Norm() {
    return prod.l2Norm();
}

double SparArrayProd::infNorm() {
    return prod.infNorm();
}