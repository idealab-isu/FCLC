
class SparArray {
public:
    SparArray(int, int);
    void setArrayDim(int, int);
    void setArray();
    void declareArray(const double *, int);
    void printArray();
    void printCompact();
    double getSparsity();
    double getDensity();
    double getValue(int, int);
    int getRowDim();
    int getColDim();
    int getSize();
    void ** getArray();
    double lNorm(int);
    double l2Norm();
    double infNorm();


private:
    int row_dim = 1;
    int column_dim = 1;
    int size;
    int *rowPtr;
    int *columnPtr;
    double *valuePtr;
    void **spar = new void * [3];

};

class SparArrayProd{
public:
    SparArrayProd(SparArray, SparArray);
    void product(SparArray, SparArray);
    void printArray();
    void printCompact();
    double getSparsity();
    double getDensity();
    double getValue(int, int);
    int getRowDim();
    int getColDim();
    int getSize();
    void ** getArray();
    double lNorm(int);
    double l2Norm();
    double infNorm();

private:
    SparArray prod = SparArray(0,0);
};

class GaussSolver{
public:
    GaussSolver(SparArray, SparArray);
    void solve(SparArray, SparArray);
    void printArray();
    void printCompact();
    double getSparsity();
    double getDensity();
    double getValue(int, int);
    int getRowDim();
    int getColDim();
    int getSize();
    void ** getArray();
    double lNorm(int);
    double l2Norm();
    double infNorm();

private:
    SparArray soln = SparArray(0,0);
};

class IterSolver{
public:
    IterSolver(SparArray, SparArray, double);
    void solve(SparArray, SparArray, double);
    void printArray();
    void printCompact();
    double getSparsity();
    double getDensity();
    double getValue(int, int);
    int getRowDim();
    int getColDim();
    int getSize();
    void ** getArray();
    double lNorm(int);
    double l2Norm();
    double infNorm();

private:
    SparArray soln = SparArray(0,0);
    double tolerance;
};