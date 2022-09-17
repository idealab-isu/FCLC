//
// Created by smenon on 9/15/22.
//
#include <iostream>

int main(){
    int a,b,c;
    std::cout << "Input three different integers:";
    std::cin >> a >> b >> c;
    std::cout << "Sum is " << a+b+c << std::endl;
    std::cout << "Average is " << (a+b+c)/3 << std::endl;
    std::cout << "Product is " << a*b*c << std::endl;

    //Smallest
    if(a <= b && a <= c){
        std::cout <<"Smallest is " << a << std::endl;
    } else if (b <= a && b <= c){
        std::cout <<"Smallest is " << b << std::endl;
    } else{
        std::cout <<"Smallest is " << c << std::endl;
    }

    //Largest
    if(a >= b && a >= c){
        std::cout <<"Largest is " << a << std::endl;
    } else if (b >= a && b >= c){
        std::cout <<"Largest is " << b << std::endl;
    } else{
        std::cout <<"Largest is " << c << std::endl;
    }

    return 0;
}
