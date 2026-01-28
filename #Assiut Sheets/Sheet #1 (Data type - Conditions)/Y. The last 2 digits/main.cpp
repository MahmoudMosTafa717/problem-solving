#include <iostream>

using namespace std;

int main()
{
    long long A,B,C,D;
    cin >> A >> B >> C >> D;

// We are doing this is because the multiplication might lead to overflow
// so we are here reducing their value according to constraints
    A=A%100; // A = 55=>0.55
    B=B%100;
    C=C%100;
    D=D%100;

    long long multiplication = A*B*C*D;
    long long result = multiplication % 100 ;
    if (result<=9) cout<< "0";
    cout << result;
    return 0;
}
