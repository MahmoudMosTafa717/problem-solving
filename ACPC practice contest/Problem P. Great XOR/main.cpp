#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--){
        long long x;
        cin >> x;
        long long ans = 0;
        long long power = 1;

        while(power < x){
            if((x&power) == 0) {
                    ans +=power;
                    power <<=1;
            }
            cout << ans ;
        }
    }
    return 0;
}
