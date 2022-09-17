//
// Created by smenon on 9/15/22.
//

#include <iostream>


int main(){
    int a;
    std::cout << "Enter a five digit integer: ";
    std::cin >> a;
    std::cout << a /10000 << "   ";
    a = a % 10000;
    std::cout << a /1000 << "   ";
    a = a % 1000;
    std::cout << a /100 << "   ";
    a = a % 100;
    std::cout << a /10 << "   " << a % 10;

    return 0;
}