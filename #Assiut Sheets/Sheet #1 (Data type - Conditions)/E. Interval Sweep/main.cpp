#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
//       not empty
    if (a + b >= 1 && abs(a - b) <= 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
