#include "denArray.h"
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

IterSolver::IterSolver(denArray A, denArray b, double tol){
    if ((A.getRowDim() == b.getRowDim()) && (b.getColDim() == 1) ){
        tolerance = tol;
        soln = denArray(A.getColDim(),1);
        residual = denArray(b.getRowDim(),1);
        direction = denArray(b.getRowDim(),1);
        K = denArray(A.getRowDim(),A.getColDim());
        copy(A,K);
        f = denArray(b.getRowDim(),b.getColDim());
        copy(b,f);
        solve(K,f);
    }

    else
        cout<<"Invalid matrix dimensions"<<endl;
}

void IterSolver::copy(denArray P, denArray Q) {
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

void IterSolver::transpose(denArray H, denArray H_trans) {
    if (H.getRowDim()==H_trans.getColDim() && H.getColDim()==H_trans.getRowDim()){
        double * htrPtr = H_trans.getArray();
        double * hPtr = H.getArray();
        int row = H_trans.getRowDim();
        int column = H_trans.getColDim();
        for (int i=0; i<row; i++){
            for (int j=0; j<column; j++)
                *(htrPtr + i * column + j) = *(hPtr + j * row + i);
        }
    }

    else
        cout<<"Matrices' dimensions do not match"<<endl;
}

void IterSolver::solve(denArray K , denArray f) {
    double * const fPtr = f.getArray();
    double * const resPtr = residual.getArray();
    double * const dirPtr = direction.getArray();
    double * const solPtr = soln.getArray();
    int row = residual.getRowDim();
    int column = K.getColDim();
    double rNrN = 0;
    double rNrN_prev = 0;
    double dKd = 0;
    denArray k_dir = denArray(row,1);
    denArrayProd k_dirr = denArrayProd(K,direction);
    denArray dirTrans = denArray(1,row);

    
    //initialise
    double a[1] = {1};
    soln.declareArray(a,1);
    denArrayProd k_soln = denArrayProd(K,soln);
    double *k_solnPtr = k_soln.getArray();
    for (int j=0; j<row; j++) {
        *(resPtr + j) = *(fPtr + j) - *(k_solnPtr + j);
        *(dirPtr + j) = *(resPtr + j);
    }


    epsilon = residual.l2Norm();
    denArray residualTrans = denArray(1, row);
    transpose(residual, residualTrans);
    denArrayProd rTr = denArrayProd(residualTrans, residual);
    rNrN = *(rTr.getArray());

    int loopCounter = 0;
    cout<<endl;
    cout<<"Convergence chart: "<<endl;
    cout<<setw(15)<<"iteration#"<<setw(15)<<"error"<<endl;
    while(epsilon>=tolerance){
        loopCounter++;

        //Calculation of beta
        rNrN_prev = rNrN;
        transpose(residual, residualTrans);
        rTr = denArrayProd(residualTrans, residual);
        rNrN = *(rTr.getArray());
        beta = rNrN / rNrN_prev;

        //Search direction
        for (int j=0; j<row; j++)
            *(dirPtr + j) = *(resPtr + j) + beta * (*(dirPtr + j));

        //alpha calculation
        transpose(direction, dirTrans);
        k_dirr = denArrayProd(K,direction);
        k_dir.declareArray(k_dirr.getArray(),k_dirr.getLength());
        k_dirr = denArrayProd(dirTrans,k_dir);
        dKd = *(k_dirr.getArray());
        alpha = rNrN / dKd;

        //solution updation
        for (int i=0; i<column; i++)
            *(solPtr + i) = *(solPtr + i) + alpha * (*(dirPtr + i));

        //residual calculation
        for (int j=0; j<row; j++)
            *(resPtr + j) = *(resPtr + j) - alpha * (*(k_dir.getArray() + j));

        epsilon = abs(alpha) * direction.l2Norm();

        if(loopCounter%5 == 0)
            cout<<setw(15)<<loopCounter<<setw(15)<<epsilon<<endl;
    }

}

void IterSolver::printArray() {
    soln.printArray();
}

int IterSolver::getRowDim() {
    return soln.getRowDim();
}

int IterSolver::getColDim(){
    return soln.getColDim();
}

int IterSolver::getLength() {
    return soln.getRowDim() * soln.getColDim();
}

double * IterSolver::getArray() {
    return soln.getArray();
}

double IterSolver::lNorm(int base){
    return soln.lNorm(base);
}

double IterSolver::l2Norm() {
    return soln.l2Norm();
}

double IterSolver::infNorm() {
    return soln.infNorm();
}