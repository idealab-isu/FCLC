//Exercise 8.8

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    unsigned int values[5] = { 2, 4, 6, 8, 10};
    unsigned int *vPtr;

    cout<<"Array elements printed using index notation"<<endl;
    for (int i=0; i<5; i++)
        cout<<values[i]<<" ";
    cout<<endl;

    vPtr = values;

    cout<<"Array elements printed using pointer notation"<<endl;
    for (int i=0; i<5; i++)
        cout<<*(vPtr + i)<<" ";
    cout<<endl;

    cout<<"Array elements printed using pointer notation with array name as pointer"<<endl;
    for (int i=0; i<5; i++)
        cout<<*(values + i)<<" ";
    cout<<endl;

    cout<<"Array elements printed using pointer notation with pointer indexing"<<endl;
    for (int i=0; i<5; i++)
        cout<<vPtr[i]<<" ";
    cout<<endl;

    cout<<"Referencing the 5th element using various methods: "<<endl;
    cout<<setw(15)<<left<<"values[4]"<<" = "<<values[4]<<endl;
    cout<<setw(15)<<left<<"*(values + 4)"<<" = "<<*(values + 4)<<endl;
    cout<<setw(15)<<left<<"vPtr[4]"<<" = "<<vPtr[4]<<endl;
    cout<<setw(15)<<left<<"*(vPtr + 4)"<<" = "<<*(vPtr + 4)<<endl;

    cout<<"\nAddress referenced by vPtr+3 is "<< vPtr+3 <<endl;
    cout<<"The value stored in vPtr+3 is "<< *(vPtr+3) <<endl;

    vPtr = &values[4];
    vPtr -= 4;

    cout<<"\nAddress referenced by vPtr-=4 is " << vPtr <<endl;
    cout<<"The value stored in vPtr-=4 is " << *vPtr <<endl;

}
