#include <iostream>
#include <stdlib.h>
#include <vector>
#include <cmath>
#include <ctime>
#include "TowerHanoi.h"
#include <stack>

using namespace std;

//Chapter 6:    16, 17, 18, 26, 28, 29, 31, 36, 37, 38, 39*,  41*, 42, 50

int myRandom(int min, int max)
{
    static bool first = true;
    if (first)
    {
        srand( time(NULL) );
        first = false;
    }
    return min + rand() % (( max + 1 ) - min);
}

void q6_16(){

    cout << myRandom(1,2) << endl;
    cout << myRandom(1,100) << endl;
    cout << myRandom(0,9) << endl;
    cout << myRandom(1000,1112) << endl;
    cout << myRandom(-1,1) << endl;
    cout << myRandom(-3,11) << endl;

}

void q6_17(){
    int set1[5] = {2,4,6,8,10};
    int set2[5] = {3,5,7,9,11};
    int set3[5] = {6,10,14,18,22};

    cout << "Printing at Random from 1st Set." << endl;
    cout << "**********************" << endl;
    int myChoice1 = myRandom(0,4);
    cout << set1[myChoice1] << endl;

    cout << "Printing at Random from 2nd Set." << endl;
    cout << "**********************" << endl;
    int myChoice2 = myRandom(0,4);
    cout << set2[myChoice2] << endl;

    cout << "Printing at Random from 3rd Set." << endl;
    cout << "**********************" << endl;
    int myChoice3 = myRandom(0,4);
    cout << set3[myChoice3] << endl;

}

int q6_18(int base, int power){
    int result = 1;
    for(int i = 0; i < power; i++){
        result = result*base;
    }
    return result;
}

float CtoF(float C){
    return 9.0*C/5.0 + 32.0;
}

float FtoC(float F){
    return 5.0/9.0*(F-32.0);
}

void printTempTables(){

    cout << "\n Now Printing Conversion Table from C to F" << endl;
    cout << "**************************************************" << endl;
    for(int i = 0; i <= 100; i++){
        if(i%3 == 0){
            cout << "\n" << i << " Celsius = " << CtoF(i) << " Fahrenheit, ";
        }
        else{
            cout << i << " Celsius = " << CtoF(i) << " Fahrenheit, ";
        }

    }

    cout << "\n Now Printing Conversion Table from F to C" << endl;
    cout << "**************************************************" << endl;
    for(int j = 32; j <= 212; j++){
        if(j%3 == 0){
            cout << "\n" << j << " Fahrenheit = " << FtoC(j) << " Celsius, ";
        }
        else{
            cout << j << " Celsius = " << FtoC(j) << " Fahrenheit, ";
        }
    }
}

bool isPerfect(int number){
    if (number <= 0){
        cout << "Enter a positive integer.." << endl;
    } else{
        vector<int> all_divs;
        int divisor_sum = 1;
        for(int t = 2; t < number; t++){
            if (number%t == 0){
                divisor_sum = divisor_sum + t;
                all_divs.push_back(t);
            }
        }
        if(number == divisor_sum){
            cout << "\n" << number << " = ";
            for(int q : all_divs){
                cout << q << " ";
            }
            return true;
        }else{
            return false;
        }
    }
}

void q6_28(int max_limit = 1000){
    for(int s=1;s <= max_limit; s++){
        isPerfect(s);
    }
}

bool isPrime(int number){

    if (number <= 1){
        cout << "Enter a positive integer >= 2.." << endl;
        return false;
    } else{

        bool is_prime = true;
        clock_t time_req = clock();
        for (int i = 2; i <= number/2; ++i) {
            if (number % i == 0) {
                is_prime = false;
                break;
            }
        }
        time_req = clock() - time_req;
        //cout << "\n Compute Time N/2 = " << (float)time_req/CLOCKS_PER_SEC << " seconds \n" << endl;
        return is_prime;
    }
}

bool isPrimeSQRT(int number){

    if (number <= 1){
        cout << "Enter a positive integer >= 2.." << endl;
        return false;
    } else{
        int sqrt_number = int(sqrt(number));
        bool is_prime = true;

        clock_t time_req = clock();
        for (int i = 2; i <= sqrt_number; ++i) {
            if (number % i == 0) {
                is_prime = false;
                break;
            }
        }
        time_req = clock() - time_req;
        cout << "\n Compute Time SQRT(N) = " << (float)time_req/CLOCKS_PER_SEC << " seconds \n" << endl;
        return is_prime;
    }
}

int primeCountingFn(int maxLimit = 10000){
    return 1229;
}

void q6_29(){
    int primeCount = 0;
    cout << "Printing all primes <= 10,000." << endl;
    for(int i = 2; (i <= 10000) && (primeCount <= primeCountingFn()); i++){
        if(isPrime(i)){
            cout << i << ",";
            primeCount++;
        }
    }
    cout << "\n Total Primes Found below 10,000 = " << primeCount;
}

int findSmaller(int num1, int num2){
    if(num1 >= num2){
        return num2;
    }else{
        return num1;
    }
}
int findLarger(int num1, int num2){
    if(num1 >= num2){
        return num1;
    }else{
        return num2;
    }
}

void gcd(int num1, int num2){
    if(num1%num2 == 0){
        cout << num2;
    }else{
        if(num2%num1 == 0){
            cout << num1;
        } else{
            int smallerNum = findSmaller(num1,num2);
            int largerNum = findLarger(num1,num2);
            vector<int> all_divs;

            for(int t = 1; t <= smallerNum; t++){
                if (smallerNum%t == 0){
                    all_divs.push_back(t);
                }
            }
            while(!all_divs.empty()){
                int curr = all_divs.back();
                if(largerNum%curr == 0){
                    cout << "GCD = " << curr << endl;
                    break;
                }
                all_divs.pop_back();
            }
        }
    }
}

//36, 37, 38, 39*,  41*, 42, 50

int recursive_exponent(int power, int base){
    if (power > 0){

        return base * recursive_exponent(power - 1, base);
    }
    else{
        return 1;
    }
}


string fibonacci(int n){
    int fibPrev = 0;
    int fibNext = 1;
    int t = 0;
    cout << fibPrev << endl;
    cout << fibNext << endl;
    int count = 0;
    while (count < n - 2){
        t = fibNext;
        fibNext = fibPrev + fibNext;
        fibPrev = t;
        if (count < n-2){
            cout << fibNext << endl;
        }
        count++;
    }
    return "done";
}


string fibonacciD(int n, bool onlyLast){
    double fibPrev = 0;
    double fibNext = 1;
    double t = 0;
    cout << fibPrev << endl;
    cout << fibNext << endl;
    int count = 0;
    while (count < n - 2){
        t = fibNext;
        fibNext = fibPrev + fibNext;
        fibPrev = t;
        if(onlyLast == 1){
            if (count == n-3){
                cout << fibNext << endl;
            }
        } else {
            if (count < n-2){
                cout << fibNext << endl;
            }
        }
        count++;
    }
    return "done";
}

void Hanoi(int nDisks, int pegInit, int pegTarget, int pegTemp){

    if(nDisks  == 1){
        cout << "Disc = 1 : " << pegInit <<" -> "<< pegTarget << endl;
        return;
    }
    //Using the Sequence Described for the problem in D&D
    Hanoi(nDisks - 1, pegInit, pegTemp, pegTarget);
    cout << "Disc = " << nDisks << " : " << pegInit << " -> " << pegTarget << endl;
    Hanoi(nDisks - 1, pegTemp, pegTarget, pegInit);

}

void HanoiIter(int nDisks, int pegInit, int pegTarget, int pegTemp) {

}


int gcdRec(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcdRec(b, a % b);
    }
}


inline float area(int radius){
    return M_PI * (radius * radius);
}




int main() {

    //q6_16();
    //q6_17();
    //cout << q6_18(3,4) << endl;

    /* Q 6.26 */
    //cout << "C to F " << CtoF(-40) << endl;
    //cout << "F to C " << FtoC(212) << endl;
    //printTempTables();

    /* Q 6.28 */
    //cout << isPerfect(6);
    //q6_28();

    /* Q 6.29 */
    //cout << isPrime(9);
    //cout << isPrimeSQRT(9);
    //q6_29();

    /* Q 6.31 */
    //gcd(24,32);

    //cout << recursive_exponent(3,4) << endl; //Computing 4^3 - Q 6.36

    /* Q6.37 */
    //cout << fibonacci(50) << endl; // Max Int Fibonacci Number = 1836311903.
    //cout << fibonacciD(1478, 1) << endl; // Max Double upto 1477 terms

    /* Q6.38
    cout << "Discs are numbered in the order of Sizes e.g. For a 3 Disc Problem Disc 3 is the largest and Disc 1 is the smallest." << endl;
    Hanoi(3,1,3,2); //Move 3 Disks from Peg 1 to Peg 3 via Peg 2
    */

    /* Q. 6.39 */

    //cout << "Discs are numbered in the order of Sizes e.g. For a 3 Disc Problem Disc 3 is the largest and Disc 1 is the smallest." << endl;
    //towerOfHanoi(3,'A','B','C'); //Move 3 Disks from Peg A to Peg C via Peg B


    /* Q. 6.41 */
    //cout << gcdRec(24,16);

    /* For Q6.42
    static int count = 0;
    count++;
    cout << count << endl;
    return main();
    */

    //cout << "The area of a circle with side 4 inches = " << area(4) << " sq. inches "<< endl; //Q 6.50

    return 0;
}