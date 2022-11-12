#include "Matrix.h"
#include <memory>


template <typename T>
struct matRes
{
    int inner;
    int outer;
    T value;
};


template <class T>
class CSRMatrix: public Matrix<T>
{
public:


    CSRMatrix(int rows, int cols, int nnzs, bool preallocate);

    CSRMatrix(int rows, int cols, int nnzs, T *values_ptr,\
               int *row_position, int *col_index);

    virtual ~CSRMatrix();


    virtual void printMatrix();

    virtual void matVecMult(T* &b, T *x);


    void matMatMult(CSRMatrix<T>& B, CSRMatrix<T>* &X);


    std::unique_ptr<int[]> row_position;
    std::unique_ptr<int[]> col_index;


    // How many non-zero entries we have in the matrix
    int nnzs = -1;

// Private variables - there is no need for other classes
// to know about these variables
private:

};



