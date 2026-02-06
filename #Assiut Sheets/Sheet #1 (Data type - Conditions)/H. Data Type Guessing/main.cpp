#include <iostream>
#include <climits>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    if ((n * k) % a != 0) {
        cout << "double";
        return 0;
    }

    long long result = (n * k) / a;

    if (result <= INT_MAX) {
        cout << "int";
    } else {
        cout << "long long";
    }

    return 0;
}
