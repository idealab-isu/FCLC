#include <iostream>
#include <math.h>
#include <numeric>
#include "Matrix_Class.h"

using namespace std;

void Matrix::resize(int i) {
    mat.resize(i + 1, vector<double>(i + 1, 0));
    vec.resize(i + 1, 0);
}

// getMatrix() function to insert matrix  ////////////////////////////////////////////////////////
void Matrix::getMatrix(vector<vector<double>> tmp) {
    // initializing a matrix type variable
    mat = tmp;
    row = tmp.size();
    col = tmp[0].size();
}


// getSparseMatrix() function to insert matrix  ////////////////////////////////////////////////////////
void Matrix::getSparseMatrix(vector<vector<double>> tmp) {
    // initializing a matrix type variable
    mat = tmp;
    row = tmp.size();
    col = tmp[0].size();
    int counter = 0;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (tmp[i][j] != 0){
                MatData.push_back(vector<int>());
                MatData[counter].push_back(i);
                MatData[counter].push_back(j);
                MatData[counter].push_back(tmp[i][j]);
                counter++;
            }
        }
    }
    //cout << MatLoc[2][1] << endl;
}

////////////////////////////////////////////////////////
void Matrix::DeclareMat(int i, int j) {
    mat.resize(i, vector<double>(j, 0));
}
////////////////////////////////////////////////////////
void Matrix::DeclareVec(int i) {
    vec.resize(i, 0);
}



// getSparseMatrix() function to insert matrix  ////////////////////////////////////////////////////////
void Matrix::getSparseVector(vector<double> tmp) {
    // initializing a matrix type variable
    vec = tmp;
    row = tmp.size();
    int counter = 0;
    for (int i = 0; i < row; i++){
            if (tmp[i] != 0){
                VecData.push_back(vector<int>());
                VecData[counter].push_back(i);
                VecData[counter].push_back(tmp[i]);
                counter++;
            }
    }
    //cout << VecData[1][0] << endl;
}

// getVector() function to insert vector  ////////////////////////////////////////////////////////
void Matrix::getVector(vector<double> tmp) {
    // initializing a matrix type variable
    vec = tmp;
    row = tmp.size();
}


// putMatrix() function to print the matrix  ////////////////////////////////////////////////////////
void Matrix::putMatrix() {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

// putMatrix() function to print the vector  ////////////////////////////////////////////////////////
void Matrix::putVector() {
    for (int i = 0; i < row; i++) {
        cout << vec[i] << " ";
        }
    cout << endl;

}

// multiply() function to perform multiplication of two matrix  /////////////////////////////////////
Matrix Matrix::SparseMatMatMultiply(Matrix M2) {
    // initializing a Matrix type variable
    Matrix tmp;

    // copying the value of parameters in the data members
    int row1 = row;
    int col1 = col;

    int row2= M2.row;
    int col2 = M2.col;

    tmp.row = row1;
    tmp.col = col2;
    // allocating arrays for new matix
    tmp.mat.resize(tmp.row, vector<double>(tmp.col, 0));

    //cout << tmp.row << endl;
    // check feasibility
    if (col1==row2) {
        // nested for loop to multiply two matrices
        for (int i = 0; i < MatData.size(); i++) {
            for (int j = 0; j < M2.MatData.size(); j++) {
                if (MatData[i][1] == M2.MatData[j][0]) {
                    tmp.mat[int(MatData[i][0])][int(M2.MatData[j][1])] +=
                            ((MatData[i][2]) * (M2.MatData[j][2]));
                    //cout << tmp.mat[int(MatData[i][0])][int(M2.MatData[j][1])] << endl;
                }

            }
        }
    }
    else
        cout << "These matrices could not be multiplied" << endl;
    // returning the resulted matrix
    return (tmp);
}

// multiply() function to perform multiplication of two matrix  /////////////////////////////////////
Matrix Matrix::SparseMatVecMultiply(Matrix M2) {
    // initializing a Matrix type variable
    Matrix tmp;

    // copying the value of parameters in the data members
    int row1 = row;
    int col1 = col;

    int row2 = M2.row;

    tmp.row = row1;

    // allocating arrays for new matix
    tmp.vec.resize(tmp.row, 0);

    //cout << MatData.size() << endl;
    // check feasibility
    if (col1 == row2) {
        // nested for loop to multiply two matrices
        for (int i = 0; i < MatData.size(); i++) {
            for (int j = 0; j < M2.VecData.size(); j++) {
                if (MatData[i][1] == M2.VecData[j][0]) {
                    tmp.vec[int(MatData[i][0])] +=
                            ((MatData[i][2]) * (M2.VecData[j][1]));
                    //cout << M2.VecData[j][1] << endl;
                }
            }
        }
    }
    else
        cout << "These matrices could not be multiplied" << endl;
    // returning the resulted matrix
    return (tmp);

}

// multiply() function to perform multiplication of Matrix-Vector //////////////////////////////////////////
Matrix Matrix::MatVecMultiply(Matrix M2) {
    // initializing a Matrix type variable
    Matrix tmp;

    // copying the value of parameters in the data members
    int row1 = row;
    int col1 = col;

    int row2= M2.row;

    tmp.row = row1;
    // allocating arrays for new matix
    tmp.vec.resize(tmp.row);

    // check feasibility
    if (col1==row2){
        // nested for loop to multiply two matrices
        for (int i = 0; i < tmp.row; i++) {
            tmp.vec[i] = 0;
            for (int k = 0; k < col; k++) {
                tmp.vec[i] = tmp.vec[i] + ((mat[i][k]) * (M2.vec[k]));
            }
        }
    }
    else
        cout << "These matrices could not be multiplied" << endl;
    // returning the resulted matrix
    return (tmp);
}


// multiply() function to perform multiplication of two sparse matrix  /////////////////////////////////////
Matrix Matrix::MatMatMultiply(Matrix M2) {
    // initializing a Matrix type variable
    Matrix tmp;

    // copying the value of parameters in the data members
    int row1 = row;
    int col1 = col;

    int row2= M2.row;
    int col2 = M2.col;

    tmp.row = row1;
    tmp.col = col2;
    // allocating arrays for new matix
    tmp.mat.resize(tmp.row, vector<double>(tmp.col));

    // check feasibility
    if (col1==row2){
        // nested for loop to multiply two matrices
        for (int i = 0; i < tmp.row; i++) {
            for (int j = 0; j < tmp.col; j++) {
                tmp.mat[i][j] = 0;
                for (int k = 0; k < col; k++) {
                    tmp.mat[i][j] = tmp.mat[i][j] + ((mat[i][k]) * (M2.mat[k][j]));
                }
            }
        }
    }
    else
        cout << "These matrices could not be multiplied" << endl;
    // returning the resulted matrix
    return (tmp);
}


/// calculate L Norm of a vector ///////////////////////////////////////////////////////////////
double Matrix::VectorNorm(int l) {
    double norm = 0;
    for (int i = 0; i < row ; i++){
        norm = norm + pow(vec[i], l);
    }
    norm = pow(norm, (1.0/l));
    return norm;
}


/// Gauss Elimination Solver ///////////////////////////////////////////////////////////////

Matrix Matrix::GaussSolver(Matrix M2) {
    Matrix out;
    row = this->mat.size();
    col = this->mat[0].size();
    //cout << col << endl;
    vector<vector<double>> tmp(row, vector<double>(col+1));;
    out.vec.resize(row);
    out.row = row;

    // Assemble Matrices
    for (int i = 0; i < row; i++){
        tmp[i][col] = M2.vec[i];
        for (int j = 0; j < col; j++){
            tmp[i][j] = this->mat[i][j];
            //cout << tmp[i][i] << endl;
        }
    }

    // Applying Gauss Elimination //
    for(int i = 0; i < row - 1; i++)
    {
        if(tmp[i][i] == 0.0)
        {
            cout<<"Mathematical Error!";
            exit(0);
        }
        for(int j = i + 1; j < row; j++)
        {
            double ratio = tmp[j][i]/tmp[i][i];
            for(int k = 0; k < col + 1; k++)
            {
                tmp[j][k] = tmp[j][k] - ratio*tmp[i][k];
            }
        }
    }
    out.vec[row-1] = tmp[row - 1][col]/tmp[row - 1][col - 1];

    for(int i = row - 2; i >= 0; i--)
    {
        out.vec[i] = tmp[i][col];
        for(int j = i + 1 ;j < col; j++)
        {
            out.vec[i] = out.vec[i] - tmp[i][j]*out.vec[j];
        }
        out.vec[i] = out.vec[i]/tmp[i][i];
    }

    return (out);
}


///  Vector Combination ///////////////////////////////////////////////////////////////
vector<double> Matrix::VectorCombination( double a, vector<double> A, double b, vector<double> B ){
    int n = A.size();
    vector<double> C(n, 0);
    for ( int i = 0; i < n; i++ ) {
        C[i] = a * A[i] + b * B[i];
    }
    return C;
}

///  Inner Product ///////////////////////////////////////////////////////////////

double Matrix::innerProduct(vector<double> A, vector<double> B){
    return inner_product( A.begin(), A.end(), B.begin(), 0.0 );
}


///  Conjugate gradient linear solver ///////////////////////////////////////////////////////////////
Matrix Matrix::ConjugateGradientSolver(Matrix M2) {


    Matrix out, Ad, d;
    out.vec.resize(row, 0);
    out.row = row;
    d.row = row;
    vector<double> r(row, 0.0);
    vector<double> r_old(row, 0.0);


    int n = mat.size();

    r = M2.vec;
    d.vec = r;

    int k = 0;
    while ( k < n )
    {
        r_old = r;
        Ad = this->MatVecMultiply(d);
        double alpha = innerProduct( r, r ) / innerProduct( d.vec, Ad.vec );
        out.vec = VectorCombination( 1.0, out.vec, alpha, d.vec );
        r = VectorCombination( 1.0, r, -alpha, Ad.vec );
        double beta = innerProduct( r, r ) / innerProduct( r_old, r_old );
        d.vec = VectorCombination( 1.0, r, beta, d.vec );
        k++;
    }

    return out;
}



