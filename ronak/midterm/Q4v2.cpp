#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <numeric>

using namespace std;

//Helper Functions

void print( string title, const vector<float> &V )
{
    cout << title << '\n';

    int n = V.size();
    for ( int i = 0; i < n; i++ )
    {
        float x = V[i];
        cout << x << '\t';
    }
    cout << '\n';
}

void print( string title, const vector<vector<float>> &A )
{
    cout << title << '\n';

    int m = A.size(),
            n = A[0].size();

    for ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
        {
            float x = A[i][j];
            cout << x << '\t';
        }
        cout << '\n';
    }
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


vector<float> vectorCombination( float a, vector<float> U, float b, vector<float> V ) { // Linear combination of vectors

    int n = U.size();

    vector<float> W( n );

    for ( int j = 0; j < n; j++ ){
        W[j] = a * U[j] + b * V[j];
    }

    return W;
}


vector<float> multVector(vector<float> A, float c){
    for(int i = 0; i < A.size(); i++){
        A[i] = A[i]*c;
    }
    return A;
}

vector<float> conjugateGradientSolver( vector<vector<float>> A, vector<float> b ){

    int n = A.size();
    vector<float> xNow(n,0.0f);
    float denom, alpha, beta;

    //Initiate r
    vector<float> rNow = vectorCombination(-1.0f,b,1.0f, multiply(A,xNow));
    //Initiate p
    vector<float> pNow = multVector(rNow,-1.0f);

    int k = 0;

    while ( k < n )
    {

        //Calculate alpha
        denom = innerProduct(pNow,multiply(A,pNow));
        alpha = innerProduct(rNow,rNow)/denom;


        //Update xNow
        xNow = vectorCombination(1.0,xNow,alpha,pNow);

        //Update rNow
        rNow = vectorCombination(-1.0f,b,1.0f, multiply(A,xNow));

        //calculate beta
        beta = innerProduct(rNow, multiply(A,pNow))/innerProduct(pNow, multiply(A,pNow));

        //update pNow
        pNow = vectorCombination(1.0,multVector(rNow,-1.0),1.0, multVector(pNow,beta));

        k++;
    }

    return xNow;
}

int main()
{
    vector<vector<float>> A = {{ 4, 1 }, { 1, 3 }}; //A Matrix
    vector<float> b = {1, 2}; // b Vector

    print( "\nA:", A );
    print( "\nB:", b );

    // Solving Ax = b

    vector<float> X = conjugateGradientSolver(A, b);
    print( "\nX:", X );

    print( "\nCheck AX:", multiply( A, X ) );
}
