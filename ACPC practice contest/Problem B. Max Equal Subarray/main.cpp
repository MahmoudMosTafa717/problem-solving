#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t ;
    cin >> t;

    for (int test=0 ; test < t ; test++){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        long long ans = 0;

        for (int i = 0 ; i < n ; i++){
                long long value = a[i];
        if (value == 0){
            continue;
        }
        long long countLength = 0 ;
        for (int j = i ; j < n ; j ++){
            if (a[j] == value || a [j] == 0){
                countLength++;
            } else break;
        }
        ans = max(ans,countLength);
    }
    long long zeros = count(a.begin(),a.end(),0);
    ans = max (ans,zeros);
    cout << ans ;
    return 0;
}}
