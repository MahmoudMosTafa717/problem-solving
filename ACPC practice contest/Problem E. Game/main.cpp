#include <iostream>

using namespace std;

int main()
{
    int A,H;
    cin >> A >> H;
    if (A>H) cout << "A";
        else if (A<H) cout << "H";
    else cout << "D";
    return 0;
}
