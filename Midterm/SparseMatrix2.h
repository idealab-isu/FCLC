#ifndef __SPARSEMATRIX2_H__
#define	__SPARSEMATRIX2_H__
#include <vector>
#include <iostream>

namespace SparseMatrix
{

    template<typename T>
    class SparseMatrix
    {

    public:

        // === CREATION ===

        SparseMatrix(int n);
        SparseMatrix(int rows, int columns);

        SparseMatrix(const SparseMatrix<T> & m);
        SparseMatrix<T> & operator = (const SparseMatrix<T> & m);

        ~SparseMatrix(void);


        // === SET & GET ===

        int getRowCount(void) const;
        int getColumnCount(void) const;


        // === VALUES ===

        T get(int row, int col) const;
        SparseMatrix & set(T val, int row, int col);


        // === OPERATIONS ===

        std::vector<T> multiply(const std::vector<T> & x) const;
        std::vector<T> operator * (const std::vector<T> & x) const;

        SparseMatrix<T> multiply(const SparseMatrix<T> & m) const;
        SparseMatrix<T> operator * (const SparseMatrix<T> & m) const;

        // === FRIEND FUNCTIONS ===

        template<typename X>
        friend bool operator == (const SparseMatrix<X> & a, const SparseMatrix<X> & b);

        template<typename X>
        friend bool operator != (const SparseMatrix<X> & a, const SparseMatrix<X> & b);

        template<typename X>
        friend std::ostream & operator << (std::ostream & os, const SparseMatrix<X> & matrix);

    protected:

        int m, n;

        std::vector<T> * vals;
        std::vector<int> * rows, * cols;
    };

}
#endif