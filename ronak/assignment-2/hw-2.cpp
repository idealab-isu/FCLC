#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void estimatePi(int maxTerms){
    float display_array[maxTerms];
    float pi = 0.0f;
    for(int j = 0; j < maxTerms; j++){
        pi += pow(-1.00,j)*(4.00/(2.00*j+1));
        display_array[j] = pi;
    }

    for(int k = 0; k < maxTerms; k++){
        cout << "(Up to) Number of Terms in the Series = " << k+1 << ", Value of Pi = " << fixed << setprecision(5) << display_array[k] << endl;
    }
}

void findPythagorasTriples(int max){
    for(int i = 1; i <= max; i++){
        for(int j = 1; j <= max; j++){
            for(int k = 1; k<= max; k++){
                if(pow(i,2) + pow(j,2) == pow(k,2)){
                    cout << "Triple Found (" << i << "," << j << "," << k << ")" << endl;
                }
            }
        }
    }
}

void deMorgan(int x, int y, int expr_serial_num){

    bool expr = !(x < 5) && !(y >= 7);
    bool eq_expr = !((x < 5) || (y >= 7));

    int g = 7;
    bool expr2 = !(x == y) || !(g != 5);
    bool eq_expr2 = !((x == y) && (g != 5));

    int h = 5;

    bool expr_next = !(x == y) || !(h != 5);
    bool eq_expr_next = !((x == y) && (h != 5));

    bool expr3 = !((x <= 8) && (y > 4));
    bool eq_expr3 = !(x <= 8) || !(y > 4);

    bool expr4 = !((x > 4) || (y <= 6));
    bool eq_expr4 = !(x > 4) && !(y <= 6);

    switch(expr_serial_num){

        case 1:


            if(expr == eq_expr){
                cout << "De Morgan's Law Holds!";
            } else{
                cout << "De Morgan's Law Doesn't Hold!";
            }

            break;

        case 2:

            if((expr2 == eq_expr2) && (expr_next == eq_expr_next)){
                cout << "De Morgan's Law Holds!";
            } else{
                cout << "De Morgan's Law Doesn't Hold!";
            }

            break;

        case 3:

            if(expr3 == eq_expr3){
                cout << "De Morgan's Law Holds!";
            } else{
                cout << "De Morgan's Law Doesn't Hold!";
            }

        default:

            if(expr4 == eq_expr4){
                cout << "De Morgan's Law Holds!";
            } else{
                cout << "De Morgan's Law Doesn't Hold!";
            }

    }
}

void removeBreak(){

    int count;
    for ( count = 1; (count <= 10) && (count != 5); ++count )
    {
        cout << count << " " << endl;
    }
    cout << "\n Broke out of loop at count = " << count << endl;
}

int main() {

    /* Estimate Pi */
    estimatePi(1000);

    /* Pythagoras */
    findPythagorasTriples(500);

    /* DeMorgan */
    /* The third argument is to indicate which expression we are checking for */
    deMorgan(3,3,4); //This should always return that "DeMorgan's Laws hold.

    /*Break and Continue */
    removeBreak();

    return 0;
}



