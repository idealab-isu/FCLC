#include "denArray.h"
#include <iostream>
using namespace std;

denArrayProd::denArrayProd(denArray A, denArray B) {
    if (A.getColDim() == B.getRowDim()){
        prod = denArray(A.getRowDim(), B.getColDim());
        product(A,B);
    }

    else
        cout<<"Array dimensions do not conform for matrix multiplication"<<endl;
}

void denArrayProd::product(denArray A, denArray B){
    int rowA = A.getRowDim();
    int columnA = A.getColDim();
    int columnB = B.getColDim();

    double *arrayA = A.getArray();
    double *arrayB = B.getArray();
    double sum = 0;
    double * arrayC = new double [rowA*columnB];
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < columnB; j++) {
            sum = 0;
            for (int k = 0; k < columnA; k++)
                sum = sum + (*(arrayA + i * columnA  + k)) * (*(arrayB + k * columnB + j));
            *(arrayC + i * columnB + j) = sum;
        }
    }
    prod.declareArray(arrayC,rowA*columnB);
}

void denArrayProd::printArray() {
    prod.printArray();
}

int denArrayProd::getRowDim() {
    return prod.getRowDim();
}

int denArrayProd::getColDim() {
    return prod.getColDim();
}

int denArrayProd::getLength() {
    return prod.getLength();
}

double * denArrayProd::getArray() {
    return prod.getArray();
}

double denArrayProd::lNorm(int base){
    return prod.lNorm(base);
}

double denArrayProd::l2Norm(){
    return prod.l2Norm();
}

double denArrayProd::infNorm(){
    return prod.infNorm();
}

