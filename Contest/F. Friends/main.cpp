#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;

    bool g[6][6] = {false};

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a][b] = g[b][a] = true;
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = i + 1; j <= 5; j++) {
            for (int k = j + 1; k <= 5; k++) {
                bool allFriends = g[i][j] && g[i][k] && g[j][k];
                bool allStrangers = !g[i][j] && !g[i][k] && !g[j][k];

                if (allFriends || allStrangers) {
                    cout << "WIN\n";
                    return 0;
                }
            }
        }
    }

    cout << "FAIL\n";
}
