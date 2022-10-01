#include <iostream>
#include <math.h>
using namespace std;

int main()
{

     double PI = 0;
     int i = 0;

     for(i=0; i<=4000; i++)
     {
       PI += 4*pow(-1, i)/(2*i+1);
       if(i%1000 == 0 && i != 0 )
       {
        cout<<"PI estimation after "<<i<<" terms is: "<<PI<<endl;
       } 

  
     }
}
