#include <iostream>
#include <string>
#include <math.h>
#include "MidtermMatrix.h"
#include "MidtermVector.h"
using namespace std;

template <class T>
void PrintMatrixContent(MidtermMatrix<T> matrix)
{
    int nRows = matrix.GetNumRows();
    int nCols = matrix.GetNumCols();
    for (int row = 0; row<nRows; ++row)
    {
        for (int col = 0; col<nCols; ++col)
        {
            cout << matrix.GetElement(row, col) << "   ";

        }
        cout<< endl;
    }
}

int main()
{
    cout<< "This is the code for the FCLC Midterm" << endl;

    // For Matrix * Matrix
    double Matrix1[12] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0};
    MidtermMatrix<double> testMatrix(3, 4, Matrix1);

    // Printing out all the elements of Matrix1
    cout << endl << "**************************************" << endl;
    cout << "3x4 matrix test." << endl;

    // Mutiplying a column vector by a matrix
    cout << "*************************************" << endl;
    cout << "Multiplying a column vector by a Matrix (Test)" << endl;
    double columnData[3] = {1.5, 2.5, 3.5};
    double squareData[9] = {1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0};
    MidtermMatrix<double> testColumn(3, 1, columnData);
    MidtermMatrix<double> squareMatrix(3, 3, squareData);

}



