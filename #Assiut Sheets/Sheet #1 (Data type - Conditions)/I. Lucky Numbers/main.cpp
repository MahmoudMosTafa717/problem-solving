#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = n / 10; // tens digit
    int b = n % 10; // ones digit

    if ((b != 0 && a % b == 0) || (a != 0 && b % a == 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
