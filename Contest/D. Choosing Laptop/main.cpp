#include <bits/stdc++.h>
using namespace std;

struct Laptop {
    int speed, ram, hdd, cost;
};

int main() {
    int n;
    cin >> n;

    vector<Laptop> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].speed >> a[i].ram >> a[i].hdd >> a[i].cost;
    }

    vector<bool> outdated(n, false);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (a[j].speed > a[i].speed &&
                a[j].ram   > a[i].ram &&
                a[j].hdd   > a[i].hdd) {
                outdated[i] = true;
                break;
            }
        }
    }

    int bestIndex = -1;
    int minCost = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (!outdated[i] && a[i].cost < minCost) {
            minCost = a[i].cost;
            bestIndex = i;
        }
    }

    cout << bestIndex + 1 << endl;

    return 0;
}
