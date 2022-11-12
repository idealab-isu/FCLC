#include "SparArray.h"
#include <iostream>
using namespace std;

GaussSolver::GaussSolver(SparArray A, SparArray b){
    if ((A.getRowDim() == b.getRowDim()) && (b.getColDim() == 1) ){
        soln = SparArray(A.getColDim(),1);
        solve(A,b);
    }

    else
        cout<<"Invalid matrix dimensions"<<endl;
}

void GaussSolver::solve(SparArray A, SparArray b) {
    int row = A.getRowDim();
    int col = A.getColDim();
    double * aNew = new double [row * col];
    double * bNew = new double [row];
    double * sNew = new double [col];
    for (int i=0; i<row; i++){
        * (bNew + i) = b.getValue(i,0);
        for (int j=0; j<col; j++)
            * (aNew + i * A.getColDim() + j) = A.getValue(i,j);
    }

    double multiplier;
    //forward elimination
    for (int i=0; i < col-1; i++){
        for (int k=i+1; k<row; k++) {
            if (abs(*(aNew + k * col + i)) >= 1e-6) {
                multiplier = *(aNew + i * col + i) / *(aNew + k * col + i);
                for (int j = i; j < col; j++) {
                    *(aNew + k * col + j) = (*(aNew + k * col + j)) * multiplier
                                               - *(aNew + i * col + j);
                }
                *(bNew + k) = (*(bNew + k)) * multiplier - (*(bNew + i));
            }

            else {
                *(aNew + k * col + i) = 0;
                continue;
            }
        }
    }

    //backward substitution
    for (int i = (col-1); i>0; i--){
        for (int k = i-1; k>=0; k--){
            if (abs(*(aNew + k * col + i)) >= 1e-6) {
                multiplier = *(aNew + k * col + i) / *(aNew + i * col + i);
                *(aNew + k * col + i) = 0;
                *(bNew + k) = (*(bNew + k)) - (*(bNew + i)) * multiplier;
            }
            else {
                *(aNew + k * col + i) = 0;
                continue;
            }
        }
    }

    for (int l = 0; l<col; l++)
        *(sNew + l) = *(bNew + l) / *(aNew + l * col + l);

    soln.declareArray(sNew, col);

    delete [] aNew;
    delete [] bNew;
    delete [] sNew;
}

void GaussSolver::printArray(){
    soln.printArray();
}

void GaussSolver::printCompact(){
    soln.printCompact();
}

double GaussSolver::getSparsity() {
    return soln.getSparsity();
}

double GaussSolver::getDensity() {
    return soln.getDensity();
}

double GaussSolver::getValue(int row_index, int col_index){
    return soln.getValue(row_index, col_index);
}

int GaussSolver::getRowDim() {
    return soln.getRowDim();
}

int GaussSolver::getColDim() {
    return soln.getColDim();
}

int GaussSolver::getSize() {
    return soln.getSize();
}

void ** GaussSolver::getArray() {
    return soln.getArray();
}

double GaussSolver::lNorm(int base) {
    return soln.lNorm(base);
}

double GaussSolver::l2Norm() {
    return soln.l2Norm();
}

double GaussSolver::infNorm() {
    return soln.infNorm();
}