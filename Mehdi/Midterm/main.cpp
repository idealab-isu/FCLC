#include <iostream>
#include <vector>
#include "class.h"
#include <chrono>
using namespace std;

int main() {
    // creating objects
    Matrix M1, M2, M3, M4, M5, M6;

    vector<vector<float>> m {{1, 1, 8}, {0, 1, 6}, {2, 5 ,6}};
    vector<vector<float>> Sparse {{1, 0, 0}, {0, 0, 6}, {2, 0 ,0}};
    vector<float> v {1, 1, 8};
    vector<float> sv {1, 0, 8};
    // inserting matrices and vectors
    M1.getMatrix(m);
    M2.getMatrix(m);
    M2.getVector(v);

    // printing the matrix using putMatrix() function
    cout << "\nMatrix A: \n" << endl;
    M1.putMatrix();
    cout << endl;
    cout << "Matrix B: \n" << endl;
    M2.putMatrix();


    M3 = M1.MatMatMultiply(M2);
    cout << "\nMultiply of A matrix and B matrix (dense) : \n" << endl;
    // printing the resulted matrix
    M3.putMatrix();

    M3 = M1.MatVecMultiply(M2);
    cout << "\nMultiply of A matrix and B vector (dense) : \n" << endl;
    // printing the resulted matrix
    M3.putVector();

    cout << "\nL2-Norm: " << M3.VectorNorm(2) << endl << endl;



    cout << "\nMultiply of A matrix and B matrix (sparse) : \n" << endl;
    M4.getSparseMatrix(Sparse);
    M5.getSparseMatrix(Sparse);
    M6 = M4.SparseMatMatMultiply(M5);
    M6.putMatrix();
    cout << "\nMultiply of A matrix and B vector (sparse) : \n" << endl;
    M5.getSparseVector(sv);
    M6 = M4.SparseMatVecMultiply(M5);
    M6.putVector();
    cout << endl;


    Matrix A, X, B;

    vector<vector<float>> AA { { 4, 1 }, { 1, 3 } };
    vector<float> BB { 1, 2 };
    A.getMatrix(AA);
    B.getVector(BB);
    X = A.GaussSolver(B);
    cout << "Gauss Elimination Solver Result: " << endl;
    X.putVector();
    cout << endl;

    A.getMatrix(AA);
    B.getVector(BB);
    X = A.ConjugateGradientSolver(B);
    cout << "Conjugate Gradient Solver Result: " << endl;
    X.putVector();
    cout << endl;



    cout << "execution time for Conjugate Gradient Solver: " << endl;
    auto start = std::chrono::system_clock::now();
    for (int i = 0; i < 1000; i++)
        X = A.ConjugateGradientSolver(B);
    auto end = std::chrono::system_clock::now();
    double a = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << "ms" << endl << endl;

    cout << "execution time for Gauss Solver: " << endl;
    auto start2 = std::chrono::system_clock::now();
    for (int i = 0; i < 1000; i++)
        X = A.GaussSolver(B);
    auto end2 = std::chrono::system_clock::now();
    double a2 = std::chrono::duration_cast<std::chrono::milliseconds>(end2 - start2).count();
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end2 - start2).count() << "ms" << endl << endl;



    return 0;
}