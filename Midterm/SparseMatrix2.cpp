#include <vector>
#include <iostream>
#include "SparseMatrix2.h"
#include "MidtermVector.h"

namespace SparseMatrix
{
    template<typename T>
    SparseMatrix<T>::SparseMatrix(int n)
    {
        this->construct(n, n);
    }


    template<typename T>
    SparseMatrix<T>::SparseMatrix(int rows, int columns)
    {
        this->construct(rows, columns);
    }


    template<typename T>
    SparseMatrix<T>::SparseMatrix(const SparseMatrix<T> & matrix)
    {
        this->deepCopy(matrix);
    }


    template<typename T>
    SparseMatrix<T> & SparseMatrix<T>::operator = (const SparseMatrix<T> & matrix)
    {
        if (&matrix != this) {
            this->destruct();
            this->deepCopy(matrix);
        }

        return *this;
    }


    template<typename T>
    SparseMatrix<T>::~SparseMatrix(void)
    {
        this->destruct();
    }

    // === SET & GET ===

    template<typename T>
    int SparseMatrix<T>::getRowCount(void) const
    {
        return this->m;
    }


    template<typename T>
    int SparseMatrix<T>::getColumnCount(void) const
    {
        return this->n;
    }


    // === VALUES ===

    template<typename T>
    T SparseMatrix<T>::get(int row, int col) const
    {
        this->validateCoordinates(row, col);

        int currCol;

        for (int pos = (*(this->rows))[row - 1] - 1; pos < (*(this->rows))[row] - 1; ++pos) {
            currCol = (*(this->cols))[pos];

            if (currCol == col) {
                return (*(this->vals))[pos];

            } else if (currCol > col) {
                break;
            }
        }

        return T();
    }


    template<typename T>
    SparseMatrix<T> & SparseMatrix<T>::set(T val, int row, int col)
    {
        this->validateCoordinates(row, col);

        int pos = (*(this->rows))[row - 1] - 1;
        int currCol = 0;

        for (; pos < (*(this->rows))[row] - 1; pos++) {
            currCol = (*(this->cols))[pos];

            if (currCol >= col) {
                break;
            }
        }

        if (currCol != col) {
            if (!(val == T())) {
                this->insert(pos, row, col, val);
            }

        } else if (val == T()) {
            this->remove(pos, row);

        } else {
            (*(this->vals))[pos] = val;
        }

        return *this;
    }


    // === OPERATIONS

    template<typename T>
    std::vector<T> SparseMatrix<T>::multiply(const std::vector<T> & x) const
    {

        std::vector<T> result(this->m, T());

        if (this->vals != NULL) { // only if any value set
            for (int i = 0; i < this->m; i++) {
                T sum = T();
                for (int j = (*(this->rows))[i]; j < (*(this->rows))[i + 1]; j++) {
                    sum = sum + (*(this->vals))[j - 1] * x[(*(this->cols))[j - 1] - 1];
                }

                result[i] = sum;
            }
        }

        return result;
    }


    template<typename T>
    std::vector<T> SparseMatrix<T>::operator * (const std::vector<T> & x) const
    {
        return this->multiply(x);
    }


    template<typename T>
    SparseMatrix<T> SparseMatrix<T>::multiply(const SparseMatrix<T> & m) const
    {

        SparseMatrix<T> result(this->m, m.n);

        T a;


        for (int i = 1; i <= this->m; i++) {
            for (int j = 1; j <= m.n; j++) {
                a = T();

                for (int k = 1; k <= this->n; k++) {
                    a = a + this->get(i, k) * m.get(k, j);
                }

                result.set(a, i, j);
            }
        }

        return result;
    }


    template<typename T>
    SparseMatrix<T> SparseMatrix<T>::operator * (const SparseMatrix<T> & m) const
    {
        return this->multiply(m);
    }

}

// === FRIEND FUNCTIONS ===

template<typename T>
bool operator == (const SparseMatrix::SparseMatrix<T> & a, const SparseMatrix::SparseMatrix<T> & b)
{
    return ((a.vals == NULL && b.vals == NULL)
            || (a.vals != NULL && b.vals != NULL && *(a.vals) == *(b.vals)))
           && ((a.cols == NULL && b.cols == NULL)
               || (a.cols != NULL && b.cols != NULL && *(a.cols) == *(b.cols)))
           && *(a.rows) == *(b.rows);
}


template<typename T>
bool operator != (const SparseMatrix::SparseMatrix<T> & a, const SparseMatrix::SparseMatrix<T> & b)
{
    return !(a == b);
}


template<typename T>
std::ostream & operator << (std::ostream & os, const SparseMatrix::SparseMatrix<T> & matrix)
{
    for (int i = 1; i <= matrix.m; i++) {
        for (int j = 1; j <= matrix.n; j++) {
            if (j != 1) {
                os << " ";
            }

            os << matrix.get(i, j);
        }

        if (i < matrix.m) {
            os << std::endl;
        }
    }

    return os;
}