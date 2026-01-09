#include <iostream>
/*
Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  10^5).

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.
*/
using namespace std;

int main()
{
    long long x,y;
    cin >> x >> y;

    long long sum = x + y ;
    long long mul = x * y ;
    long long diff = x - y ;

    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << mul << endl;
    cout << x << " - " << y << " = " << diff << endl;

    return 0;
}
