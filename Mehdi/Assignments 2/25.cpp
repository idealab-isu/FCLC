#include <iostream>
using namespace std;



int main()
{
bool brk = false;
int count; // control variable also used after loop terminates
for ( count = 1; count <= 10, !brk; ++count ) // loop 10 times
{
if ( count == 4 )
brk = true; // break loop only if count is 5
cout << count << " ";
} // end for
cout << "\nBroke out of loop at count = " << count << endl;
} // end main