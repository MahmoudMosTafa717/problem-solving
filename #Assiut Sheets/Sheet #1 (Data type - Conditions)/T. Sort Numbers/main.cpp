#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int minn = min({x, y, z});
    int maxx = max({x, y, z});
    int mid;

    // Find the middle number
    if ((x != minn && x != maxx) || (x == y && x != z) || (x == z && x != y)) {
        mid = x;
    } else if ((y != minn && y != maxx) || (y == z && y != x)) {
        mid = y;
    } else {
        mid = z;
    }

    // Ascending order
    cout << minn << endl;
    cout << mid << endl;
    cout << maxx << endl << endl;

    // Original order
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}
