

class denArray{
    public:
        denArray(int, int);
        void setArrayDim(int, int);
        int getRowDim();
        int getColDim();
        int getLength();
        double * getArray();
        void setArray();
        void declareArray(const double *,const int);
        void printArray();
        double lNorm(int);
        double l2Norm();
        double infNorm();

    private:
        int row_dim;
        int column_dim;
        double * arr;
};

class denArrayProd {
public:
    denArrayProd(denArray, denArray);
    void product(denArray, denArray);
    void printArray();
    int getRowDim();
    int getColDim();
    int getLength();
    double * getArray();
    double lNorm(int);
    double l2Norm();
    double infNorm();


private:
    denArray prod = denArray(0,0);
};

class GaussSolver {
public:
    GaussSolver(denArray, denArray);
    void solve(denArray, denArray);
    void copy(denArray, denArray);
    void printArray();
    int getRowDim();
    int getColDim();
    int getLength();
    double * getArray();
    double lNorm(int);
    double l2Norm();
    double infNorm();

private:
    denArray K = denArray(0,0);
    denArray f = denArray(0,0);
    denArray soln = denArray(0,0);
};

class IterSolver {
public:
    IterSolver(denArray, denArray, double);
    void solve(denArray, denArray);
    void copy(denArray, denArray);
    void transpose(denArray, denArray);
    void printArray();
    int getRowDim();
    int getColDim();
    int getLength();
    double * getArray();
    double lNorm(int);
    double l2Norm();
    double infNorm();

private:
    denArray soln = denArray(0,0);
    denArray residual = denArray(0,0);
    denArray K = denArray(0,0);
    denArray f = denArray(0,0);
    denArray direction = denArray(0,0);
    double tolerance;
    double epsilon;
    double alpha;
    double beta;

};