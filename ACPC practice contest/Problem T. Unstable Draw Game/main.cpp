#include <iostream>

using namespace std;

int main()
{
    long long t ;
    cin >> t;
    while (t--){
        long long n ;
        cin >> n;
        if (n>=5 && n%4==1) cout <<"Brian";
        else cout << "Anne";
    }

    return 0;
}
