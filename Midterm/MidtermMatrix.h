#ifndef MidtermMatrix_H
#define MidtermMatrix_H

template <class T>
class MidtermMatrix
{
public:

    MidtermMatrix();
    MidtermMatrix(int nRows, int nCols);
    MidtermMatrix(int nRows, int nCols, const T *inputData);
    MidtermMatrix(const MidtermMatrix<T>& inputMatrix);

    // not sure whether or not I need a destructor
    //~MidtermMatrix();

    bool resize(int numRows, int numCols);
    int GetNumRows();
    int GetNumCols();

private:
    T *m_matrixData;
    int m_nRows, m_nCols, m_nElements;
};



template <class T>

MidtermMatrix<T> :: MidtermMatrix()
{
    m_nRows = 1;
    m_nCols = 1;
    m_nElements = 1;
    m_matrixData = new T[m_nElements];
    m_matrixData[0] = 0.0;
}

template <class T>
MidtermMatrix<T> :: MidtermMatrix(int nRows, int nCols)
{
    m_nRows = nRows;
    m_nCols = nCols;
    m_nElements = m_nRows * m_nCols;
    m_matrixData = new T[m_nElements];
    for (int i=0; i<m_nElements; i++)
        m_matrixData[i] = 0.0;
}

template <class T>
MidtermMatrix<T> :: MidtermMatrix(const MidtermMatrix<T>& inputMatrix)
{
    m_nRows = inputMatrix.m_nRows;
    m_nCols = inputMatrix.m_nCols;
    m_nElements = inputMatrix.m_nElements;
    m_matrixData = new T[m_nElements];
    for (int i=0; i<m_nElements; i++)
        m_matrixData[i] = inputMatrix.m_matrixData[i];
}


// CONFIGURATION FUNCTIONS
template <class T>
bool MidtermMatrix<T> :: resize(int numRows, int numCols)
{
    m_nRows = numRows;
    m_nCols = numCols;
    m_nElements = (m_nRows * m_nCols);
    delete[] m_matrixData;
    m_matrixData = new T[m_nElements];
    if (m_matrixData != nullptr)
    {
        for (int i=0; i<m_nElements; i++)
            m_matrixData[i] = 0.0;

        return true;
    }
    else
    {
        return false;
    }
}

// Multiplying matrices
template <class T>
MidtermMatrix<T> operator* (const MidtermMatrix<T>& lhs, const MidtermMatrix<T>& rhs)
{
    int r_numRows = rhs.m_nRows;
    int r_numCols = rhs.m_nCols;
    int l_numRows = lhs.m_nRows;
    int l_numCols = lhs.m_nCols;

    if (l_numCols == r_numRows)
    {
        T *tempResult = new T[lhs.m_nRows * rhs.m_nCols];

        for (int lhsRow = 0; lhsRow<l_numRows; lhsRow++)
        {
            for (int rhsCol=0; rhsCol<r_numCols; rhsCol++)
            {
                T elementResult = 0.0;
                for (int lhsCol=0; lhsCol<l_numCols; lhsCol++)
                {
                    int lhsLinearIndex = (lhsRow * l_numCols) + rhsCol;

                    int rhsLinearIndex = (lhsCol * r_numCols) + rhsCol;

                    elementResult += (lhs.m_matrixData[lhsLinearIndex] * rhs.m_matrixData[rhsLinearIndex]);

                }

                int resultLinearIndex = (lhsRow * r_numCols) + rhsCol;
                tempResult[resultLinearIndex] = elementResult;

            }
        }
        delete[] tempResult;
        return result;
    }
    else
    {
        MidtermMatrix<T> result (1,1);
        return result;
    }

}
#endif







