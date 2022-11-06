#pragma once
#include <string>
#include <vector>
using namespace std;


class Matrixx
{
public:

    vector<float> MatVecMultiply(vector<float>, vector<vector<float>>);

private:
	string first_name;

	};


class Matrix {
    // private data members
private:
    int row, col;
    vector<vector<float>> mat;
    vector<vector<int>> MatData; // i , j , value
    vector<vector<int>> VecData;
    vector<float> vec;

    // public functions
public:

    void getMatrix(vector<vector<float>>);
    void getSparseMatrix(vector<vector<float>>);
    void getSparseVector(vector<float>);
    void getVector(vector<float>);
    void putMatrix();
    void putVector();
    float VectorNorm(int);
    Matrix MatMatMultiply(Matrix);
    Matrix MatVecMultiply(Matrix);
    Matrix SparseMatMatMultiply(Matrix);
    Matrix SparseMatVecMultiply(Matrix);
    Matrix GaussSolver(Matrix);
    vector<float> VectorCombination( float, vector<float>, float, vector<float>);
    float innerProduct(vector<float>, vector<float>);
    Matrix ConjugateGradientSolver(Matrix);

};
