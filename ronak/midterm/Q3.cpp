#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#include<vector>

using namespace std;

int main()
{

    int i,j,k,n;

    /* Inputs */
    n = 3;
    vector<vector<float>> a;

    a = {{1,1,1,9},
         {2,-3,4,13},
         {3,4,5,40}};

    vector<float> x;

    x = {0,0,0};
    float ratio;

    /* Applying Gauss Elimination */

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++) //Operate on every row j after row i
        {
            ratio = a[j][i]/a[i][i];

            for(k=0;k<=n;k++) //Perform matrix operation on entire row j using the ratio
            {
                a[j][k] = a[j][k] - ratio*a[i][k];

            }

        }
    }

    /* Solve the system backwards */
    x[n-1] = a[n-1][n]/a[n-1][n-1];

    for(i=n-2;i>=0;i--)
    {
        x[i] = a[i][n];

        for(j=i+1;j<n;j++)
        {
            x[i] = x[i] - a[i][j]*x[j];

        }
        x[i] = x[i]/a[i][i];

    }


    /* Displaying Individual Solution */
    cout<< endl<<"Solution: "<< endl;
    for(i=0;i<n;i++)
    {
        cout<<"x["<< i<<"] = "<< x[i]<< endl;
    }

    return(0);
}
