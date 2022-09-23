#include <iostream>
#include <math.h>
using namespace std;

int main()
{

     int side1 , side2, hypotenuse, x1, x2, x3 = 0;
   

     for(side1=1; side1<=500; side1++)
     {
        for(side2=1; side2<=500; side2++)
        {
            for(hypotenuse=1; hypotenuse<=500; hypotenuse++)
            {
                x1 = side1*side1;
                x2 = side2*side2;
                x3 = hypotenuse*hypotenuse;
                if (x3 == x1 + x2)
                {
                    cout<<side1<<", "<<side2<<", "<<hypotenuse<<endl; 
                }
            }
  
        }
     }
}
