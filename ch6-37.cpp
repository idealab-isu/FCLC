#include <stdio.h>

double fibonacci ( int a  ) ;

int main ( void ) {
    int number ;
    for  ( number = 0 ; number <= 1000; number++ )
        fibonacci (number ) ;
    return 0 ;
}

double fibonacci ( int a  ) {
    double b , c ;
    int  i ;
    b = 0 ;
    c = 1 ;
    int result  = 0 ;

    for ( i = 1 ; i <= a; i++) {
        result = b + c ;
        b =  c ;
        c = result ;
    }
    printf  (  "Fibonni result of %5d th is : %10.2f \n" , a , b ) ;

    return  0 ;
}