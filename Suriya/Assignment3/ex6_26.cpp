//Exercise 6.26

#include<iostream>
#include<iomanip>

using namespace std;

double celsius (int);
double fahrenheit (int);

int main() {
    double cel, fah;
    cout << left << setw(10) << "CELCIUS" << setw(18) << "FAHRENHEIT" << "|| "
         << setw(12) << "FAHRENHEIT" << setw(12) << "CELCIUS"<<"| "
         << setw(12) << "FAHRENHEIT" << setw(10) << "CELCIUS"<<endl;
    cout << fixed;
    for (int i = 0; i <= 100; i++) {
        cout << left << setw(10) << i << setw(18) << setprecision(2) << fahrenheit(i)
             << "|| " << setw(12) << i + 32 << setw(12) << setprecision(2) << celsius(i + 32);
        if (i<=79)
             cout << "| " << setw(12) << i + 133<< setw(10) << setprecision(2)<<celsius(i + 133);
        cout << endl;
    }
}

double celsius (int fah){
    return 5.0/9.0*(fah - 32.0);
}

double fahrenheit (int cel){
    return (9.0/5.0*cel+32.0);
}