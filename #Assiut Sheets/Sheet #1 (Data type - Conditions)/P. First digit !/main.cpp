#include <iostream>

using namespace std;

int main()
{
    int x ;
    cin >> x;
    int num = x / 1000;
    if (num % 2 == 0){
        cout << "EVEN";
    }else
    cout << "ODD" << endl;
    return 0;
}

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string X;
    cin >> X;

    if ((X[0] - '0') % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    long long X;  // use long long if X can be large
    cin >> X;

    while (X >= 10) {
        X /= 10;  // remove the last digit
    }

    // now X is the first digit
    if (X % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;

    return 0;
}

*/
