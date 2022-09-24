#include <iomanip>
#include <iostream>
#include <set>
using namespace std;


// Question 19
// Calculating Pi from the infinite series
/*
int main() {
    int verifier = 0;
    int lastTerm = 1000;
    double pi = 4.0f, denominator = 3.0f;
    int i = 1;
    int neg;

    cout << "Term" << setw(4) << "\t Approximate value of PI" << endl;

    cout << i << setw(4) << "\t" << pi << endl;
    while (i <= lastTerm) {

        if (i % 2 != 0)
            pi += (pi / denominator);
        else
            cout << i << setw(4) << "\t" << pi << endl;
        ++i;

        denominator += 2;

    }
    return 0;
}
*/



// Question 20
/*
int main()
{
    const int upperBound = 500;
    set<int> squares;

    // Precompute perfect squares
    for ( int i = 1; i <= upperBound; i++ ) squares.insert( i * i );
    auto first = squares.begin();
    int ccmax = upperBound * upperBound;

    // Search for pairs aa and bb such that aa + bb is in squares.
    for ( auto aa = first; aa != squares.end(); aa++ )
    {
        for ( auto bb = aa; bb != squares.end() && *aa + *bb <= ccmax; bb++ )
        {
            auto cc = squares.find( *aa + *bb );
            if ( cc != squares.end() )
            {
                cout << distance( first, aa ) + 1 << '\t'
                     << distance( first, bb ) + 1 << '\t'
                     << distance( first, cc ) + 1 << '\n';
            }
        }
    }
}
 */

// Question 22

/*
int main()
{
    // Part A
    int x;
    int y;
    cout << "Enter x and y for check !( x < 5 ) && !( y >= 7 ) [-1 -1 for exit]:";
    cin >> x >> y;
    while ((x != -1) or (y != -1))
    {
        bool result1 = !( x < 5 ) && !( y >= 7 );
        bool result2 = ! (( x < 5 ) || ( y >= 7 ));
        cout << result1 << " equivalent " << result2 << endl;
        cout << "Enter x and y for check !( x < 5 ) && !( y >= 7 ) [-1 -1 for exit]:";
        cin >> x >> y;
    }

    // Part B
    int a, b, g;
    cout << "Enter a, b and g for check !( a == b) || !( g != 5 ) [-1 -1 -1 for exit]:";
    cin >> a >> b >> g;
    while ((x != -1) or (y != -1) or (g != -1))
    {
        bool result1 = !( a == b) || !( g != 5 );
        bool result2 = ! (( a == b ) && ( g != 5 ));
        cout << result1 << " equivalent " << result2 << endl;
        cout << "Enter a, b and g for check !( a == b) || !( g != 5 ) [-1 -1 -1 for exit]:";
        cin >> a >> b >> g;
    }

    // Part C
    cout << "Enter x and y for check !(( x <= 8 ) && ( y > 4 ))	 [-1 -1 for exit]:";
    cin >> x >> y;
    while ((x != -1) or (y != -1))
    {
        bool result1 = !(( x <= 8 ) && ( y > 4 ));
        bool result2 = !( x <= 8 ) || !( y > 4 );
        cout << result1 << " equivalent " << result2 << endl;
        cout << "Enter x and y for check !(( x <= 8 ) && ( y > 4 )) [-1 -1 for exit]:";
        cin >> x >> y;
    }

    // Part D
    int i, j;
    cout << "Enter i and j for check !(( i > 4 ) || ( j <= 6 ))	 [-1 -1 for exit]:";
    cin >> i >> j;
    while ((i != -1) or (j != -1))
    {
        bool result1 = !(( i > 4 ) || ( j <= 6 ));
        bool result2 = !( i > 4 ) && !( j <= 6 );
        cout << result1 << " equivalent " << result2 << endl;
        cout << "Enter i and j for check !(( i > 4 ) || ( j <= 6 ))	 [-1 -1 for exit]:";
        cin >> i >> j;
    }
}
 */

/*
//Question 25
int main()
{
    int count; // control variable also used after loop terminates
    bool kick = false;
    for ( count = 1; count <= 10, !kick; ++count )
    {
        if ( count == 4 )
            kick = true;

        cout << count << " ";
    } // end for

    cout << "\nBroke out of loop at count = " << count << endl;
}

 */