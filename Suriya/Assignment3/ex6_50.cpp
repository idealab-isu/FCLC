//Exercise 6.50

#include<iostream>
#include<iomanip>
using namespace std;

inline double circleArea(double radius){
    return 3.14*radius*radius;
}

int main(){
    double rad;
    cout<<"Enter radius: ";
    cin>>rad;
    cout<<"Area of the circle: "<<fixed<<setprecision(3)<<circleArea(rad)<<" sq.units."<<endl;
}
