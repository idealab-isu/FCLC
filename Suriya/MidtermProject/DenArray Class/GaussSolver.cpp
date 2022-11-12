#include "denArray.h"
#include <iostream>
#include <cmath>
using namespace std;

GaussSolver::GaussSolver(denArray A, denArray b){
    if ((A.getRowDim() == b.getRowDim()) && (b.getColDim() == 1) ){
        soln = denArray(A.getColDim(),1);
        K = denArray(A.getRowDim(),A.getColDim());
        copy(A,K);
        f = denArray(b.getRowDim(),b.getColDim());
        copy(b,f);
        solve(K,f);
    }

    else
        cout<<"Invalid matrix dimensions"<<endl;
}

void GaussSolver::copy(denArray P, denArray Q){
    if((P.getRowDim()==Q.getRowDim()) && (P.getColDim()==Q.getColDim())){
        double * pPtr = P.getArray();
        double * qPtr = Q.getArray();
        int row = P.getRowDim();
        int column = P.getColDim();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                 *(qPtr + i * column + j) = *(pPtr + i * column + j);
            }
        }
    }

    else
        cout<<"Matrices' dimensions do not match"<<endl;
}

void GaussSolver::solve(denArray K, denArray f){
    int row = K.getRowDim();
    int column = K.getColDim();
    double multiplier;
    double *kPtr = K.getArray();
    double *fPtr = f.getArray();

    //forward elimination
    for (int i=0; i < column-1; i++){
        for (int k=i+1; k<row; k++) {
            if (abs(*(kPtr + k * column + i)) >= 1e-6) {
                multiplier = *(kPtr + i * column + i) / *(kPtr + k * column + i);
                for (int j = i; j < column; j++) {
                    *(kPtr + k * column + j) = (*(kPtr + k * column + j)) * multiplier
                                                   - *(kPtr + i * column + j);
                }
                *(fPtr + k) = (*(fPtr + k)) * multiplier - (*(fPtr + i));
            }

            else {
                *(kPtr + k * column + i) = 0;
                continue;
            }
        }
    }

    //backward substitution
    for (int i = (column-1); i>0; i--){
        for (int k = i-1; k>=0; k--){
            if (abs(*(kPtr + k * column + i)) >= 1e-6) {
                multiplier = *(kPtr + k * column + i) / *(kPtr + i * column + i);
                *(kPtr + k * column + i) = 0;
                *(fPtr + k) = (*(fPtr + k)) - (*(fPtr + i)) * multiplier;
            }
            else {
                *(kPtr + k * column + i) = 0;
                continue;
            }
        }
    }

    double * solnPtr = soln.getArray();
    for (int l = 0; l<column; l++)
        *(solnPtr + l) = *(fPtr + l) / *(kPtr + l * column + l);

}

int GaussSolver::getRowDim(){
    return soln.getRowDim();
}

int GaussSolver::getColDim(){
    return soln.getColDim();
};

int GaussSolver::getLength(){
    return soln.getLength();
};

double * GaussSolver::getArray(){
    return soln.getArray();
};

double GaussSolver::lNorm(int base){
    return soln.lNorm(base);
};

double GaussSolver::l2Norm(){
    return soln.l2Norm();
};

double GaussSolver::infNorm(){
    return soln.infNorm();
};

void GaussSolver::printArray() {
    soln.printArray();
}
