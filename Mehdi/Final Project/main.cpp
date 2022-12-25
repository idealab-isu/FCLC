#include <iostream>
#include <vector>
#include <math.h>
#include "Matrix_Class.h"
#include "FE_Solver_Class.h"
#include <chrono>
#define _USE_MATH_DEFINES
using namespace std;

int main() {

    int grid_size = 10;
    int nbf = 2;
    grid p_grid(grid_size, 1.0);
    element fe(p_grid, 2);
    equation e;
    Matrix Ag, bg, x;
    Ag.resize(grid_size);
    bg.resize(grid_size);
    x.resize(grid_size);

        for (int elem_ID = 0; elem_ID < p_grid.elem_num; elem_ID++) {
            for (int k = 0; k < p_grid.gauss_pts; k++) {
                double detJxW = p_grid.detJxW(elem_ID);
                double force = -1 * M_PI * M_PI * sin(M_PI * p_grid.x_gs_pts[elem_ID][k]);
                for (int i = 0; i <= 1; i++) {
                    for (int j = 0; j <= 1; j++) {
                        e.Ae[i][j] += (-1) * fe.dN(i, elem_ID) * fe.dN(j, elem_ID) * detJxW;
                    }
                    e.be[i] += fe.N(i, k) * force * detJxW;
                }
            }
            e.assemble(Ag, bg, fe, p_grid, elem_ID);
        }
        e.boundary(Ag, bg, grid_size);

        x = Ag.GaussSolver(bg);

    double L2 = fe.L2error(x, p_grid);
    p_grid.output(x);

    return 0;
}