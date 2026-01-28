#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

// AB>CD --> log(AB)>log(CD) --> B --> log(A) --> D⋅log(C)
// To avoid overflow of huge powers
    double left = B * log(A);
    double right = D * log(C);

    if(left > right){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
