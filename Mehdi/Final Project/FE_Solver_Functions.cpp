#include <iostream>
#include <fstream>
#include <math.h>
#include <numeric>
#include "FE_Solver_Class.h"
#include "Matrix_Class.h"

using namespace std;

element::element(grid g, int n_basis_functions){
    nbf = n_basis_functions;
    msh = g.msh;
    conn = g.conn;
}
double element::N(int n, int gs_point){
    double gs;
    double N;

    switch (gs_point) {
        case 0:
            gs = -0.5773502691896257;
            break;
        case 1:
            gs = 0.5773502691896257;
            break;
    }
    switch (n) {
        case 0:
            N = 0.50 * (1 - gs);
            break;
        case 1:
            N =  0.50 * (1 + gs);
            break;
    }
    return N;
}

double element::dN(int n, int elem_ID){
    double dN;
    double area = (msh[conn[elem_ID][1]][0]-msh[conn[elem_ID][0]][0]);
    switch (n) {
        case 0:
            dN = -1.0 / area;
            break;
        case 1:
            dN = 1.0 / area;
            break;
    }
    return dN;
}

double element::L2error(Matrix x, grid p) {
    double L2 = 0;
    for (int elem_ID = 0; elem_ID < p.elem_num; elem_ID++) {
        for (int k = 0; k < p.gauss_pts ; k++) {
            double detJxW = p.detJxW(elem_ID);
            double analytical = sin(M_PI * p.x_gs_pts[elem_ID][k]);

            L2 += pow((((N(0, k) *  x.vec[elem_ID]) + (N(1, k)  *  x.vec[elem_ID + 1])) - analytical), 2) * detJxW;
        }
    }
    cout << "L2 error=  " << sqrt(L2) << endl;

    return sqrt(L2);
}


grid::grid(int num_of_Xelements, double lx){
    elem_num = num_of_Xelements;
    gauss_pts = 2;
    msh.resize(elem_num + 1, vector<double>(elem_num + 1, 0));
    x_gs_pts.resize(elem_num, vector<double>(gauss_pts, 0));
    conn.resize(elem_num, vector<int>(2, 0));
    double gs1 = -0.5773502691896257;
    double gs2 = 0.5773502691896257;
    for (int elem = 0; elem <= elem_num; elem++){
        msh[elem][0] = double(elem) * lx / double (elem_num);
    }
    for (int elem = 0; elem < elem_num; elem++)   {
        conn[elem][0] = elem;
        conn[elem][1] = elem + 1;
    }

    for (int elem = 0; elem < elem_num; elem++) {
        x_gs_pts[elem][0] = ((getXcoord(elem, 1) - getXcoord(elem, 0)) * gs1
                + getXcoord(elem, 0) + getXcoord(elem, 1)) / 2.0;
        x_gs_pts[elem][1] = ((getXcoord(elem, 1) - getXcoord(elem, 0)) * gs2
                + getXcoord(elem, 0) + getXcoord(elem, 1)) / 2.0;
    }
}

double grid::getArea(int elem_ID) {
    return (msh[conn[elem_ID][1]][0]-msh[conn[elem_ID][0]][0]);
}

// Get coordinate of each node by its ID
double grid::getXcoord(int element_ID, int local_node){
    return msh[conn[element_ID][local_node]][0];
}

//    for 1D elements --->   (0) -->  o-------o  <-- (1)
int grid::getconn(int element_ID, int local_node){
    return conn[element_ID][local_node];
}

// calculate detJxW
double grid::detJxW(int elem_ID) {
    return (msh[conn[elem_ID][1]][0]-msh[conn[elem_ID][0]][0]) / 2.0;
}


void grid::output(Matrix x){
    std::ofstream write("plt_final.dat");
    write << "TITLE = \"Poi\"" << std::endl << "  VARIABLES = \"X\",\"T (FEM)\",\"T (Exact)\"" << std::endl << std::endl;
    write << std::endl << "ZONE T=\"" << "Final" << "\"" << " F=POINT" << " I=" << elem_num + 1 << std::endl; // write title to file to store main data

    for (int elem_ID = 0; elem_ID <= elem_num; elem_ID++) {
        double analytical = sin(M_PI * msh[elem_ID][0]);
        write << msh[elem_ID][0]  << "  ,  " << x.vec[elem_ID] << "  ,  " << analytical << std::endl;

    }cout << "Element length = " << msh[2][0] - msh[1][0] << endl;
}


equation::equation(void) {
    Ae.resize(2, vector<double>(2, 0));
    be.resize(2, 0);
}

// assemble local matrices in global matrices
void equation::assemble(Matrix &A, Matrix &b,element &e ,grid &p_grid, int elem_ID) {
    int elem_num = p_grid.elem_num;

       for (int i = 0; i < e.nbf; i++){
           for (int j = 0; j < e.nbf; j++){
               A.mat[p_grid.conn[elem_ID][i]][p_grid.conn[elem_ID][j]] += Ae[i][j];
               Ae[i][j] = 0;
           }
           b.vec[p_grid.conn[elem_ID][i]] += be[i];
         be[i] = 0;
       }
}

void equation::boundary(Matrix &A, Matrix &b, int xGrid){

    for (int i = 0; i <= xGrid; i++){
        A.mat[0][i] = 0;
        A.mat[xGrid][i] = 0;
    }

    A.mat[0][0] = 1;
    A.mat[1][0] = 0;
    A.mat[xGrid][xGrid] = 1;
    A.mat[xGrid-1][xGrid] = 0;
    b.vec[0] = 0;
    b.vec[xGrid] = 0;

}
void equation::refill() {
    //cout << Ae[0][0] << endl;
    Ae.resize(2, vector<double>(2, 0.0));
    //for(auto& x : Ae) memset(&x[0],0,sizeof(double)*x.size());
    //cout << Ae[0][0] << endl;
    be.resize(2, 0);
}
