#include <iostream>
using namespace std;
int main() {

    cout<<"!( x < 5 ) && !( y >= 7 )"<< " is equivalent to "<<"!( ( x < 5 ) || ( y >= 7 ) )"<<endl ;
    cout<<"!( a == b ) || !( g != 5 )"<< " is equivalent to "<<"!( ( a == b ) && ( g != 5 ) )" <<endl ;
    cout<<"!( ( x <= 8 ) && ( y > 4 ) )"<< " is equivalent to "<<"( !( x <= 8 ) || !( y > 4 ) )" <<endl ;
    cout<<"!( ( i > 4 ) || ( j <= 6 ) )"<< " is equivalent to "<<"( !( i > 4 ) && !( j <= 6 ) )" <<endl ;

    int x;
    int y;
    int a;
    int b;
    int g;
    int i;
    int j;
    int z;
    z = 0;
    // We will write the two equivalent, if the condition is satisfied z will be increased by 1. We print z after writing
    // original and equivalent expression. if z = 0 or 2, both ARE SAME, IF Z = 1, BOTH THE EXPRESSIONS ARE NOT SAME

    cout<<"Enter the value of x,y,a,b,g,i,j ";
    cin>>x>>y>>a>>b>>g>>i>>j;

    if (!( x < 5 ) && !( y >= 7 ))
        z++;
    if(!( ( x < 5 ) || ( y >= 7 ) ))
        z++;
    cout<<z<<endl;
    z = 0;
    if (!( a == b ) || !( g != 5 ))
        z++;
    if(!( ( a == b ) && ( g != 5 ) ))
        z++;
    cout<<z<<endl;
    z = 0;
    if (!( ( x <= 8 ) && ( y > 4 ) ))
        z++;
    if(( !( x <= 8 ) || !( y > 4 ) ))
        z++;
    cout<<z<<endl;
    z = 0;
    if (!( ( i > 4 ) || ( j <= 6 ) ))
        z++;
    if(( !( i > 4 ) && !( j <= 6 ) ))
        z++;
    cout<<z<<endl;
    z = 0;
}
