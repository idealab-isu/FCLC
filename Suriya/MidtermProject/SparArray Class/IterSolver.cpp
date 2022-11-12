#include "SparArray.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

IterSolver::IterSolver(SparArray A, SparArray b, double tol){
    if ((A.getRowDim() == b.getRowDim()) && (b.getColDim() == 1) ){
        tolerance = tol;
        soln = SparArray(A.getColDim(),1);
        solve(A,b,tolerance);
    }

    else
        cout<<"Invalid matrix dimensions"<<endl;
}

void IterSolver::solve(SparArray A, SparArray b, double tol) {
    int row = A.getRowDim();
    int col = A.getColDim();
    SparArray l2Cal = SparArray(row,1);
    double * residual = new double [row];
    double * direction = new double [row];
    double * k_dir = new double [row];

    double rNrN = 0;
    double rNrN_prev = 0;
    double dKd = 0;
    double epsilon = 0;
    double alpha = 0;
    double beta = 0;

    double sum = 0;
    //initialise
    double * solnDup = new double [col];
    for (int i=0; i<col; i++){
        * (solnDup + i) = 0;
    }
    * (solnDup) = 1;
    for (int i=0; i<row; i++){
        sum = 0;
        for (int k=0; k<col; k++)
            sum = sum + A.getValue(i,k) * (*(solnDup + k));
        * (residual + i) = b.getValue(i,0) - sum;
        * (direction + i) = * (residual + i);
    }

    l2Cal.declareArray(residual,row);
    epsilon = l2Cal.l2Norm();
    rNrN = pow(l2Cal.l2Norm(),2);

    int loopCounter = 0;
    cout<<endl;
    cout<<"Convergence chart: "<<endl;

    cout<<setw(15)<<"iteration#"<<setw(15)<<"error"<<endl;

    while(epsilon>=tolerance) {
        loopCounter++;

        //Calculation of beta
        rNrN_prev = rNrN;
        l2Cal.declareArray(residual,row);
        rNrN = pow(l2Cal.l2Norm(),2);
        beta = rNrN / rNrN_prev;

        //Search Direction
        for (int j=0; j<row; j++)
            * (direction + j) = *(residual + j) + beta * (*(direction + j));

        dKd = 0;
        //alpha calculation
        for (int i=0; i<row; i++) {
            sum = 0;
            for (int k = 0; k < col; k++)
                sum = sum + A.getValue(i, k) * (*(direction + k));
            *(k_dir + i) = sum;
            dKd = dKd + (*(direction + i) * sum);
        }
        alpha = rNrN / dKd;

        //solution updation
        for (int i=0; i<col; i++)
            *(solnDup + i) = *(solnDup + i) + alpha * (*(direction + i));

        //residual calculation
        for (int j=0; j<row; j++)
            *(residual + j) = *(residual + j) - alpha * (*(k_dir + j));

        l2Cal.declareArray(k_dir,row);
        epsilon = abs (alpha) * l2Cal.l2Norm();

        if(loopCounter%5 == 0)
            cout<<setw(15)<<loopCounter<<setw(15)<<epsilon<<endl;
    }

    soln.declareArray(solnDup,col);

    delete [] solnDup;
    delete [] residual;
    delete [] direction;
    delete [] k_dir;
}

void IterSolver::printArray(){
    soln.printArray();
}

void IterSolver::printCompact(){
    soln.printCompact();
}

double IterSolver::getSparsity() {
    return soln.getSparsity();
}

double IterSolver::getDensity() {
    return soln.getDensity();
}

double IterSolver::getValue(int row_index, int col_index){
    return soln.getValue(row_index, col_index);
}

int IterSolver::getRowDim() {
    return soln.getRowDim();
}

int IterSolver::getColDim() {
    return soln.getColDim();
}

int IterSolver::getSize() {
    return soln.getSize();
}

void ** IterSolver::getArray() {
    return soln.getArray();
}

double IterSolver::lNorm(int base) {
    return soln.lNorm(base);
}

double IterSolver::l2Norm() {
    return soln.l2Norm();
}

double IterSolver::infNorm() {
    return soln.infNorm();
}