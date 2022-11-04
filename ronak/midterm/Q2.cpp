#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct SparseMatStruct{

    vector<vector<float>> entries;
    vector<vector<int>> entriesMap;
    int matRows;
    int matCols;
};


/*
Generic function to find an element in vector and also its position.
It returns a pair of bool & int i.e.
bool : Represents if element is present in vector or not.
int : Represents the index of element in vector if its found else -1
*/
template < typename T>
std::pair<bool, int > findInVector(const std::vector<T>  & vecOfElements, const T  & element)
{
    std::pair<bool, int > result;
    // Find given element in vector
    auto it = std::find(vecOfElements.begin(), vecOfElements.end(), element);
    if (it != vecOfElements.end())
    {
        result.second = distance(vecOfElements.begin(), it);
        result.first = true;
    }
    else
    {
        result.first = false;
        result.second = -1;
    }
    return result;
}

vector<float> sparseColExtractbyID(SparseMatStruct A, int colIdx){


        vector<float> newEntries(A.matCols);

        for(int row = 0; row < A.matRows; row++){

            vector<int> rowMap = A.entriesMap[row];

            //See if a ColIdx exist in this row.

            pair<bool,int> sResult = findInVector(rowMap,colIdx);

            if(sResult.first == true){
                //cout << "=== " << A.entries[row][sResult.second] << endl;
                newEntries[row] = A.entries[row][sResult.second];
            }

        }

        return newEntries;

}


//Defining Matrix Vector Multiplication
vector<float> sparseMultiply(SparseMatStruct A, vector<float> x){

        static int vecX = x.size();

        if(vecX == A.matCols){
            vector<float> colVect;
            for(int i = 0; i < A.matRows; i++){

                float onePass = 0.0f;

                //Get Filled Col Positions only by reading a map
                vector<int> lop = A.entriesMap[i];

                for(int j = 0; j < A.entries[i].size(); j++){
                        onePass += A.entries[i][j]*x[lop[j]];
                }

                colVect.push_back(onePass);
            }
            return colVect;

        } else{
            cout << "Matrices Incompatible";
            float infty = std::numeric_limits<float>::infinity(); //Return Infty
            return vector<float>(infty);
        }

}

vector<vector<float>> transpose(vector<vector<float>> A){
        vector<vector<float>> result;

        static int rowsA = A.size();
        static int colsA = A[0].size();

        for(int i = 0; i < colsA; i++){
            vector<float> interim;
            for(int j = 0; j < rowsA; j++){
                interim.push_back(A[j][i]);
            }
            result.push_back(interim);
        }

        return result;
    }


vector<vector<float>> sparseMultiplyMats(SparseMatStruct A, SparseMatStruct B){

        if(B.matRows == A.matCols){
            vector<vector<float>> matrix;

            for(int _j = 0; _j < B.matCols; _j++){
                vector<float> receivedCol = sparseMultiply(A, sparseColExtractbyID(B,_j));
                matrix.push_back(receivedCol);
            }

            return matrix;

        } else {
            cout << "Matrices Incompatible";
            float infty = std::numeric_limits<float>::infinity(); //Return Infty
            return vector<vector<float>>(infty);
        }

}


//Helper Functions
void printVector(vector<float> U, bool printRaw = false){
    int vecSize_ = U.size();
    if(printRaw == true){
    cout << "[ " ;
    }
    for(int i = 0; i < vecSize_; i++){
        if(i < vecSize_ - 1) {
            cout << U[i] << endl;
        } else{
            cout << U[i];
        }
    }
    if(printRaw == true){
    cout << "]" << endl ;
    }
}

void printMatrix(vector<vector<float>> U){
    int vecRowSize_ = U.size();
    for(int i = 0; i < vecRowSize_; i++){
        cout << "\nColumn = " << i << endl;
        printVector(U[i]);
    }
    cout << endl;
}

int main() {

   //Define Sparse Matrix A

   vector<vector<float>> inEntryA = {{3,4},{1,2,3},{7}};
   vector<vector<int>> inMapA = {{0,2},{0,1,2},{0}};
   int inRowsA = 3;
   int inColsA = 3;

   //Create a Sparse Matrix Object
   SparseMatStruct spA;
   spA.entries = inEntryA;
   spA.entriesMap = inMapA;
   spA.matRows = inRowsA;
   spA.matCols = inColsA;


   //Define Sparse Matrix B

   vector<vector<float>> inEntryB = {{3,4},{1,2,3},{7}};
   vector<vector<int>> inMapB = {{0,2},{0,1,2},{0}};
   int inRowsB = 3;
   int inColsB = 3;

   //Create a Sparse Matrix Object
   SparseMatStruct spB;
   spB.entries = inEntryB;
   spB.entriesMap = inMapB;
   spB.matRows = inRowsB;
   spB.matCols = inColsB;

   /*
   //Extract First Row
   vector<float> receivedRow;
   receivedRow = sparseColExtractbyID(sp, 1);
   */

   vector<vector<float>> matResult = sparseMultiplyMats(spA,spB);

   //Print
   printMatrix(matResult);

   return 0;
}
