#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int h1,h2,h3;
    cin >> h1 >> h2 >> h3;
    cout << max(max(h1,h2),h3);
    return 0;
}
