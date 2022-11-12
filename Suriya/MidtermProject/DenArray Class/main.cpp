#include <iostream>
#include "denArray.h"

using namespace std;

int main() {

    denArray A = denArray(3,2);
    double a[6] = {1, 0, 3, 0, 5, 0};
    A.declareArray(a,6);
    cout<<"Matrix A is: "<<endl;
    A.printArray();
    cout<<endl;
    cout<<"The inf norm of Matrix A is "<<A.infNorm()<<endl;

    denArray B = denArray(2,3);
    double b[6] = {7, 0, 9, 0, 11, 0};
    B.declareArray(b,6);
    cout<<"Matrix B is: "<<endl;
    B.printArray();
    cout<<endl;
    cout<<"The L2 norm of Matrix A is "<<B.l2Norm()<<endl;

    denArrayProd C = denArrayProd(A,B);
    cout<<"The product of matrices A and B is: "<<endl;
    C.printArray();
    cout<<endl;

    cout<<"The Matrix A is: "<<endl;
    double u[9] = {2, -1, 0, -1, 2, -1, 0, -1, 2};
    denArray U = denArray(3,3);
    U.declareArray(u,9);
    U.printArray();
    cout<<endl;

    //manufactured solution
    double p[3] = {1, 2, 2};
    denArray P = denArray(3,1);
    P.declareArray(p,3);

    cout<<"The RHS is: "<<endl;
    denArrayProd UP = denArrayProd(U,P);
    UP.printArray();

    denArray Q = denArray(3,1);
    Q.declareArray(UP.getArray(),UP.getLength());

    IterSolver soln = IterSolver(U,Q,1e-5);
    cout<<endl;
    cout<<"The Solution from Conjugate Gradient is: "<<endl;
    soln.printArray();

    GaussSolver soln1 = GaussSolver(U,Q);
    cout<<endl;
    cout<<"The Solution from Gaussian Elimination is: "<<endl;
    soln1.printArray();

}

