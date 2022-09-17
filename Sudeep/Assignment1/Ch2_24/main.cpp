//
// Created by smenon on 9/15/22.
//

#include <iostream>

int main(){
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    if (a % 3 == 0){
        std::cout << "Integer " << a <<" is divisible by 3!" << std::endl;
    } else{
        std::cout << "Integer " << a <<" is not divisible by 3!" << std::endl;
    }


    return 0;
};
