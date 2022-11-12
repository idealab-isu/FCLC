#include <iostream>
#include "SparArray.h"
using namespace std;

int main() {
    SparArray A = SparArray(3, 2);
    double a[6] = {1, 0, 3, 0, 5, 0};
    A.declareArray(a, 6);
    cout << "Matrix A is: " << endl;
    A.printArray();
    cout<<endl;
    A.printCompact();
    cout << endl;
    cout << "The inf norm of Matrix A is " << A.infNorm() << endl;

    SparArray B = SparArray(2, 3);
    double b[6] = {7, 0, 9, 0, 11, 0};
    B.declareArray(b, 6);
    cout << "Matrix B is: " << endl;
    B.printArray();
    cout<<endl;
    B.printCompact();
    cout << endl;
    cout << "The L2 norm of Matrix B is " << B.l2Norm() << endl;

    SparArrayProd C = SparArrayProd(A, B);
    cout<<endl;
    cout << "The product of matrices A and B is: " << endl;
    C.printArray();
    cout<<endl;
    C.printCompact();
    cout << endl;

    cout<<"The Matrix A is: "<<endl;
    double u[9] = {2, -1, 0, -1, 2, -1, 0, -1, 2};
    SparArray U = SparArray(3,3);
    U.declareArray(u,9);
    U.printArray();
    cout<<endl;

    //manufactured solution
    double p[3] = {1, 2, 2};
    SparArray P = SparArray(3,1);
    P.declareArray(p,3);

    cout<<"The RHS is: "<<endl;
    SparArrayProd UP = SparArrayProd(U,P);
    UP.printArray();

    SparArray Q = SparArray(3,1);
    double q[3] = {0, 1, 2};
    Q.declareArray(q,3);

    GaussSolver soln1 = GaussSolver(U,Q);
    cout<<endl;
    cout<<"The Solution from Gaussian Elimination is: "<<endl;
    soln1.printArray();

    IterSolver soln2 = IterSolver(U,Q,1e-5);
    cout<<endl;
    cout<<"The Solution from CG method is: "<<endl;
    soln2.printArray();

}