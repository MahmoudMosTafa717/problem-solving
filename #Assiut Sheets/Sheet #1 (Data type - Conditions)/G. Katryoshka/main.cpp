#include <iostream>
using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;

    long long useMouths = min(n, min(m, k));

    n -= useMouths;
    k -= useMouths;

    long long useEyesOnly = min(n / 2, k);

    cout << useMouths + useEyesOnly;

    return 0;
}
