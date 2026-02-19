#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int evenCount = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] % 2 == 0)
            evenCount++;
    }

    bool majorityEven = (evenCount >= 2);

    for (int i = 0; i < n; i++) {
        if ((a[i] % 2 == 0) != majorityEven) {
            cout << i + 1;
            break;
        }
    }

    return 0;
}
