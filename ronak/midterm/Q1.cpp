#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class LinAlgebraBase{

public:
    //Defining Matrix Vector Multiplication
    vector<float> multiply(vector<vector<float>> A, vector<float> x){

        static int rowsA = A.size();
        static int colsA = A[0].size();
        static int vecX = x.size();

        if(vecX == colsA){
            vector<float> colVect;
            for(int i = 0; i < rowsA; i++){
                float onePass = 0.0f;
                for(int j = 0; j < colsA; j++){
                    onePass+=A[i][j]*x[j];
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

    float innerProduct(vector<float> u, vector<float> v){
        if(u.size() == v.size()){

            static int vecSize = u.size();
            float result = 0;

            for(int k = 0; k < vecSize; k++){
                result += u[k]*v[k];
            }
            return result;

        } else{
            cout << "Vectors are of unequal length";
            return std::numeric_limits<float>::infinity(); //Return Infty
        }
    }

    float trace(vector<vector<float>> A){
        static int rowsA = A.size();
        static int colsA = A[0].size();

        if(rowsA == colsA){
            float result = 0;
            for(int k = 0; k < rowsA; k++){
                result += A[k][k];
            }

            return result;

        } else {
            cout << "Please provide a square matrix";
            return std::numeric_limits<float>::infinity(); //Return Infty
        }

    }

};

class LinAlgebra : public LinAlgebraBase{
    public:
    vector<vector<float>> multiplyMats(vector<vector<float>> A, vector<vector<float>> B){

        static int rowsA = A.size();
        static int colsA = A[0].size();
        static int rowsB = B.size();
        static int colsB = B[0].size();

        if(rowsB == colsA){
            vector<vector<float>> matrix;

            //Transpose Matrix B
            vector<vector<float>> BT = transpose(B);

            for(int i = 0; i < colsB; i++){
                matrix.push_back(multiply(A,BT[i]));
            }

            return matrix;

        } else{
            cout << "Matrices Incompatible";
            float infty = std::numeric_limits<float>::infinity(); //Return Infty
            return vector<vector<float>>(infty);
        }

    }
    /*
    float frobNorm(vector<vector<float>> A){
        return sqrt(trace(multiply(transpose(A),A)));
    }
    */

};

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

//Main

int main() {

    vector<vector<float>> A  = {{2,2,2},{1,1,1}};
    vector<vector<float>> B = {{1,1},{1,1},{1,1}};
    vector<float> x = {0,0,0};
    LinAlgebra obj = LinAlgebra();
    vector<vector<float>> result =  obj.multiplyMats(A,B);
    printMatrix(result);

    return 0;
}
