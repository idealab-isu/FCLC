//
#include <iostream>
#include <cmath>
#include "Matrix.h"

using namespace std;

template<class T>
Matrix<T>::Matrix(int rows, int cols, bool preallocate):\
rows(rows), cols(cols), size_of_values(rows * cols), preallocate(preallocate)
{

    if (this->preallocate)
    {

        this->values.reset(new T[size_of_values]);
    }
}


template<class T>
Matrix<T>::Matrix(int rows, int cols, T *values_ptr):\
rows(rows), cols(cols), size_of_values(rows * cols)
{
    this->values.reset(values_ptr);
}


template<class T>
Matrix<T>::~Matrix()
{}

/*
template<class T>
void Matrix<T>::fillRandom()
{
    for (int i = 0; i < this->rows * this->cols; i++)
    {
        this->values[i] = (T)(rand()%101 + 0);
    }
}
*/

template<class T>
void Matrix<T>::upper_triangle(T* b, Matrix<T> &out_mat, T* &x)
{

    if (this->rows != this->cols) {
        std::cerr << "Matrix is not square!" << std::endl;
    }


    for (int i = 0; i < this->rows * this->cols; i++)
    {
        out_mat.values[i] = this->values[i];
    }

    for (int i = 0; i < this->rows; i++) x[i] = b[i];

    double s = 0.0;  // define constant
    for (int k = 0; k < (this->rows)-1; k++)
    {
        for (int i = k+1; i < this->rows; i++)
        {

            s = out_mat.values[i * this->rows + k] /\
                out_mat.values[k * this->rows + k];
            for (int j = k; j < this->rows; j++)
            {

                out_mat.values[i * this->rows + j] =\
                    out_mat.values[i * this->rows + j] -\
                    s * out_mat.values[k * this->rows + j];
            }

            x[i] = x[i] - s * x[k];
        }
    }
}

// Back Substitution on the system Ax = b

template<class T>
void Matrix<T>::back_substitution(T* b, T* &x)
{
    double s;
    // set output vector to 0
    for (int i = 0; i < this->rows; i++) x[i] = 0;

    // iterate over rows
    for (int i = (this->rows)-1; i > -1; i--)
    {
        // set constant
        s = 0.0;
        // iterate over columns
        for (int j = i+1; j < this->cols; j++)
        {
            // update constant value
            s += this->values[i * this->rows + j] * x[j];
        }
        // update the output matrix
        x[i] = (b[i] - s)/this->values[i * this->rows + i];
    }
}


template<class T>
void Matrix<T>::for_substitution(T* b, T* &x)
{
    double s;
    // set output vector to 0
    for (int i = 0; i < this->rows; i++) x[i] = 0.0;

    // iterate over rows
    for (int i = 0; i < this->rows; i++) {
        s = 0.0; // set constant
        for (int j = 0; j < i; j++) {
            // update constant
            s += this->values[i * this->rows + j] * x[j];
        }
        // update output vector
        x[i] = (b[i] - s)/this->values[i * this->rows + i];
    }
}


//--- LINEAR SOLVERS---\\

// Gaussian Elimination
template<class T>
void Matrix<T>::gaussian_elim(T* b, T* &x)
{

    // create a temporary matrix and vector to store the intermediate steps
    unique_ptr<Matrix<T>> temp_mat(new Matrix<T>(this->rows, this->cols, true));
    T* temp_vec = new T[this->rows];
    // get the upper triangle form of our input matrix
    this->upper_triangle(b, *temp_mat, temp_vec);
    // do back-substitution to get the solution vector
    temp_mat->back_substitution(temp_vec, x);
    delete[] temp_vec;
    return;
}


// ConjugateGradient
template<class T>
void Matrix<T>::conjugateGradient(T* b, T* x, double atol)
{
    // set default initial guess
    for (int i = 0; i < this->cols; i++)
    {
        x[i] = (T)1;
    }

    // declare some array pointers that we ll need in the algorithm
    T* r_k = new T[this->rows];
    T* x_A = new T[this->cols];
    T* p_k = new T[this->rows];

    // make the matVecMult to get the initial residual
    this->matVecMult(x, x_A);
    // declare initial residual
    double tot_rk = 0;
    // compute initial residual
    for (int i = 0; i < this->rows; i++)
    {
        r_k[i] = b[i] - x_A[i]; // local residual
        tot_rk += r_k[i] * r_k[i]; // norm of residual
        p_k[i] = r_k[i]; // initiate p0
    }
    tot_rk = sqrt(tot_rk); // norm of initial residual

    // declare alpha and beta
    // as variables in stack since only singular double
    double alpha_k;
    double beta_k;
    // initiate count
    int count = 0;
    // start iterating the algorithm
    while (tot_rk >= atol)
    {
        // update counter
        count++;

        // initiate p_A as the product of pk and this->matrix
        double* p_A = new double[this->rows];
        this->matVecMult(p_k, p_A);

        // initiate array pointers denominator and counter
        // for computing alpha
        double r_dot = 0;
        double p_Ap = 0;
        // get denominator and counter
        for (int i = 0; i < this->rows; i++)
        {
            r_dot += r_k[i] * r_k[i];
            p_Ap += p_k[i] * p_A[i];
        }
        // compute alpha
        alpha_k = r_dot / p_Ap;

        // getting x_k+1 and r_k+1
        // initiate array pointer to store rk+1
        double* r_k_nxt = new double[this->rows];
        // use the same loop to compute new result of kth iteration
        // and rk+1
        for (int i = 0; i < this->rows; i++)
        {
            x[i] += alpha_k * p_k[i];
            r_k_nxt[i] = r_k[i] - alpha_k * p_A[i];
        }

        // set residual variable to zero
        tot_rk = 0;
        // initiate denominator and counter
        // to compute beta
        double beta_top = 0;
        double beta_bot = 0;
        for (int i = 0; i < this->rows; i++)
        {
            // compute residual and beta rate in same loop
            tot_rk += pow(r_k_nxt[i], 2);
            beta_top += r_k_nxt[i] * r_k_nxt[i];
            beta_bot += r_k[i] * r_k[i];
        }
        // compute beta
        beta_k = beta_top / beta_bot;
        // take sqrt of residual to get the norm
        tot_rk = sqrt(tot_rk);

        // compute pk and pass rk+1 to rk memory in same loop
        for (int i = 0; i < this->rows; i++)
        {
            p_k[i] = r_k_nxt[i] + beta_k * p_k[i];
            r_k[i] = r_k_nxt[i];
        }
        delete[] p_A;
        delete[] r_k_nxt;

        // set limit of iterations for convergence
        if (count == 10000)
        {
            cout << "CG is not converging \n";
            cout << "be sure that the matrix is Symmetric Positive Definite" << endl;
            break;
        }
    }

}



