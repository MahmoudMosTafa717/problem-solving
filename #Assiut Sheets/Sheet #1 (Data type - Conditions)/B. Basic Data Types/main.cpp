#include <iostream>
/*
Input
Only one line containing the following space-separated values: int, long long, char, float and double respectively.

Output
Print each element on a new line in the same order it was received as input.
*/
using namespace std;

int main()
{
    int i;
    long long l;
    char c;
    float f;
    double d;
    cin >> i >> l >> c >> f >> d;
    cout << i << endl << l << endl << c << endl << f << endl << d;
    return 0;
}
