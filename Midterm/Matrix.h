#include <memory>
template<class T>
class Matrix
{
public:

    Matrix(int rows, int cols, bool preallocate);

    Matrix(int rows, int cols, T* values_ptr);

    // destructor
    virtual ~Matrix();

    virtual void makeIdentity();


    virtual void upper_triangle(T* b, Matrix<T> &out_mat, T* &x);


    virtual void back_substitution(T* b, T* &x);


    virtual void for_substitution(T* b, T* &x);

    virtual void matVecMult(T* &b, T* x);


    void matMatMult(Matrix<T> &B, Matrix<T> &X);



    ///LINEAR SOLVERS///


    virtual void gaussian_elim(T* b, T* &x);

    virtual void conjugateGradient(T *b, T *x, double atol);

    std::unique_ptr<T[]> values;
    int rows = -1;
    int cols = -1;

protected:
    bool preallocate = false;


private:
    int size_of_values = -1;

};
