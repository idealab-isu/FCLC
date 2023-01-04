#pragma once
#include <string>
#include <vector>

using namespace std;


class Matrix {
    // private data members
private:
    int row, col;
    vector<vector<int>> MatData; // i , j , value
    vector<vector<int>> VecData;


    // public functions
public:
    vector<vector<double>> mat;
    vector<double> vec;
    void resize(int);
    void DeclareMat(int, int);
    void DeclareVec(int);
    void getMatrix(vector<vector<double>>);
    void getSparseMatrix(vector<vector<double>>);
    void getSparseVector(vector<double>);
    void getVector(vector<double>);
    void putMatrix();
    void putVector();
    double VectorNorm(int);

    Matrix MatMatMultiply(Matrix);
    Matrix MatVecMultiply(Matrix);
    Matrix SparseMatMatMultiply(Matrix);
    Matrix SparseMatVecMultiply(Matrix);
    Matrix GaussSolver(Matrix);
    vector<double> VectorCombination( double, vector<double>, double, vector<double>);
    double innerProduct(vector<double>, vector<double>);
    Matrix ConjugateGradientSolver(Matrix);

};

