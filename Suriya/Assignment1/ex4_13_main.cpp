//Exercise 4.13

#include <iostream>

using namespace std;

int main() {
    int miles=0, gallons=1;
    int totmiles=0, totgallons=0;
    cout<<"Enter miles driven (-1 to quit): ";
    cin>>miles;
    while (miles!=-1){
        cout<<"Enter gallons used: ";
        cin>>gallons;
        if (gallons>0){
            totmiles+=miles;
            totgallons+=gallons;
            cout<<"MPG this trip: "<<static_cast<double>(miles)/gallons;
            cout<<"\nTotal MPG: "<<static_cast<double>(totmiles)/totgallons<<endl;
        }
        else
            cout<<"\nInvalid input.";
        cout<<"\nEnter miles driven (-1 to quit): ";
        cin>>miles;
    }
    cout<<"\nEnd of program"<<endl;
}
