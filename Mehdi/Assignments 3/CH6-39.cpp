#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <chrono>

using namespace std;


void tower_iter(int a, string from,string aux,string to){
    if(a==1){
        cout<<"Move disc 1 from "<<from<<" to "<<to<<endl;
        return;
    }
    else{
        int total_num_of_moves = pow(2, a) - 1;
        for (int i = total_num_of_moves; i >= 1; i--)
        {
            if (i % 3 == 1)
                cout<<"Move disc from "<<aux<<" to "<<to<<endl;

            else if (i % 3 == 2)
                cout<<"Move disc from "<<from<<" to "<<to<<endl;

            else if (i % 3 == 0)
                cout<<"Move disc from "<<from<<" to "<<aux<<endl;

        }

    }
}

int main() {

    tower_iter(4, "peg1", "peg2", "peg3");
}
