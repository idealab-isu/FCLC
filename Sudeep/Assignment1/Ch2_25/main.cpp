//
// Created by smenon on 9/15/22.
//

#include <iostream>

int main() {
    int a , b;
    std::cout <<"Enter two integers: " ;
    std::cin >> a >> b;

    if (b % a == 0){
        std::cout << a << " is a factor of " <<b << std::endl;

    } else{
        std::cout << a << " is not a factor of " <<b << std::endl;
    }
    return 0;
}
