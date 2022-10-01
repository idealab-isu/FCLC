#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <chrono>

using namespace std;


void tower(int a, string from,string aux,string to){
    if(a==1){
        cout<<"Move disc 1 from "<<from<<" to "<<to<<endl;
        return;
    }
    else{
        tower(a-1,from,to,aux);
        cout<<"Move disc "<<a<<" from "<<from<<" to "<<to<<endl;
        tower(a-1,aux,from,to);
    }
}





int main() {

    tower(3, "peg1", "peg2", "peg3");
}
