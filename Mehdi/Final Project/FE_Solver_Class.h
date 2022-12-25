#pragma once
#include <string>
#include <vector>
#include "Matrix_Class.h"
using namespace std;






// Grid class (that holds the global domain, the discretization)
class grid {
    // private data members
private:
    // public functions

public:
    vector<vector<double>> msh; // (node_ID, coordinate) for 1D grid
    vector<vector<int>> conn; // connectivity of each element to nodes
    vector<vector<double>> x_gs_pts;
    vector<vector<double>> y_gs_pts;
    int elem_num;
    int gauss_pts;
    grid(int, double);
    void output(Matrix);
    double getXcoord(int, int);
    double getArea(int);
    double detJxW(int);
    int getconn(int, int);
};


// Element class (that holds basis functions)
class element {
    // private data members
private:
    // public functions
    vector<vector<double>> msh; // (node_ID, coordinate) for 1D grid
    vector<vector<int>> conn; // connectivity of each element to nodes
public:
    element(grid, int);
    double L2error(Matrix, grid);
    int nbf;
    double N(int, int);
    double dN(int, int);

};


// Equation class (that constructs the local matrix, and assembles it)
class equation{
    // private data members
private:

public:
    equation();
    vector<vector<double>> Ae;
    vector<double> be;
    void integrands(vector<vector<double>>, vector<vector<double>>, element);
    void assemble(Matrix& , Matrix&, element&, grid& , int);
    void boundary(Matrix& , Matrix& , int );
    void refill();
};






