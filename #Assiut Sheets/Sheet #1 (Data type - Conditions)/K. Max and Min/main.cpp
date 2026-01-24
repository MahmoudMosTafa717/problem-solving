#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

//    // Check for minimum
//    if (x <= y && x <= z){
//        cout << x << " ";
//    }else if (x >= y && z >= y){
//        cout << y << " ";
//    } else {
//        cout << z << " ";
//    }
//
//    // Check for maximum
//    if (x >= y && x >= z){
//        cout << x ;
//    }else if (x <= y && z <= y){
//        cout << y;
//    } else {
//        cout << z;
//    }

//    int minimum = x;
//    if (y < minimum) minimum = y;
//    if (z < minimum) minimum = z;
//
//    int maximum = x;
//    if (y > maximum) maximum = y;
//    if (z > maximum) maximum = z;
//
//    cout << minimum << " " << maximum << endl;

    // Compute minimum
    int minimum = min(x, min(y, z));
    // Compute maximum
    int maximum = max(x, max(y, z));

    cout << minimum << " " << maximum << endl;
    return 0;
}
