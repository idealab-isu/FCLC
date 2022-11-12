//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include "CSRMatrix.h"
using namespace std;

// Constructor - using an initialisation list here
template <class T>
CSRMatrix<T>::CSRMatrix(int rows, int cols, int nnzs, bool preallocate):\
Matrix<T>(rows, cols, false), nnzs(nnzs)
{

    this->preallocate = preallocate;

    if (this->preallocate)
    {
        // Will delete this in the destructor
        this->values.reset(new T[this->nnzs]);
        this->row_position.reset(new int[this->rows+1]);
        this->col_index.reset(new int[this->nnzs]);
    }
}


template <class T>
CSRMatrix<T>::CSRMatrix(int rows, int cols, int nnzs, T *values_ptr,\
int *row_position, int *col_index): Matrix<T>(rows, cols, values_ptr),\
nnzs(nnzs)
{
    this->row_position.reset(row_position);
    this->col_index.reset(col_index);
}

// destructor
template <class T>
CSRMatrix<T>::~CSRMatrix()
= default;

// Explicitly print out the values in values array as if they are a matrix
template <class T>
void CSRMatrix<T>::printMatrix()
{
    std::cout << "Printing CSR Matrix" << std::endl;
    std::cout << "Values: ";
    for (int j = 0; j< this->nnzs; j++)
    {
        std::cout << this->values[j] << " ";
    }
    std::cout << std::endl;
    std::cout << "row_position: ";
    for (int j = 0; j< this->rows+1; j++)
    {
        std::cout << this->row_position[j] << " ";
    }
    std::cout << std::endl;
    std::cout << "col_index: ";
    for (int j = 0; j< this->nnzs; j++)
    {
        std::cout << this->col_index[j] << " ";
    }
    std::cout << std::endl;
}


template<class T>
void CSRMatrix<T>::matVecMult(T* &b, T *x)
{
    if (b == nullptr || x == nullptr)
    {
        std::cerr << "b or x haven't been created" << std::endl;
        return;
    }

    // Set the output to zero
    for (int i = 0; i < this->rows; i++)
    {
        x[i] = 0.0;
    }

    int val_counter = 0;
    // Loop over each row
    for (int i = 0; i < this->rows; i++)
    {
        // Loop over all the entries in this col
        for (int val_index = this->row_position[i]; \
        val_index < this->row_position[i+1]; val_index++)
        {
            // This is an example of indirect addressing
            // Can make it harder for the compiler to vectorise!
            x[i] += this->values[val_index] * b[this->col_index[val_index]];

        }
    }

}



template <class T>
void CSRMatrix<T>::matMatMult(CSRMatrix<T>& B, CSRMatrix<T>* &X)
{
    // Check our dimensions match
    if (this->cols != B.rows)
    {
        std::cerr << "Input dimensions for matrices don't match" << std::endl;
        return;
    }

    vector<matRes<T>> temp;


    for (int i = 0; i < this->rows; i++)
    {

        for (int val_index = this->row_position[i];\
        val_index < this->row_position[i+1]; val_index++)
        {

            for (int row_index = B.row_position[this->col_index[val_index]];\
            row_index < B.row_position[this->col_index[val_index] + 1];\
            row_index++)
            {

                matRes<T> res;

                res.inner = B.col_index[row_index];
                res.outer = i;
                res.value = this->values[val_index] * B.values[row_index];

                temp.push_back(res);
            }
        }
    }


    sort(temp.begin(), temp.end(), this->compareMatResInner);
    sort(temp.begin(), temp.end(), this->compareMatResOut);

    vector<T> values;
    vector<int> cols;
    vector<int> rows;
    rows.push_back(0);

    for (int i = 0; i < temp.size(); i++)
    {
        // create temporary variable
        T tem = temp[i].value;
        // if the next value belongs to the same position in the output matrix
        // then add it, else move on.
        while ((i+1) != temp.size() && temp[i].outer == temp[i+1].outer &&\
        temp[i].inner == temp[i+1].inner)
        {
            tem += temp[i+1].value;
            i++;
        }
        // add it to the values array
        values.push_back(tem);
        // add the row position to the cols array
        cols.push_back(temp[i].inner);
        // get the number of rows that hold no entries
        if ((i+1) != temp.size() && (temp[i+1].outer - temp[i].outer > 0)) {
            int dif = temp[i+1].outer - temp[i].outer;
            // push to the rows the value size to indicate empty row
            for (int j = 0; j < dif; j++) rows.push_back(values.size());

        }
    }

    while (rows.size() <= this->rows+1) {
        rows.push_back(values.size());
    }


    X = new CSRMatrix<T>(this->rows, this->cols, values.size(), true);

    for (int i =0; i < values.size(); i++)
    {
        X->values[i] = values[i];
        X->col_index[i] = cols[i];
    }
    for (int i = 0; i < rows.size(); i++) X->row_position[i] = rows[i];

}





