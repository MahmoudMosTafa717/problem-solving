#include <iostream>
using namespace std;

long long calc(long long x, long long y, char op) {
    if (op == '+') return x + y;
    if (op == '-') return x - y;
    if (op == '*') return x * y;
    return 0;
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    char ops[] = {'+', '-', '*'};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            // (a op1 b) op2 c
            long long r1 = calc(calc(a, b, ops[i]), c, ops[j]);

            // a op1 (b op2 c)
            long long r2 = calc(a, calc(b, c, ops[j]), ops[i]);

            if (r1 == d || r2 == d) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}

/*
//D. Ali Baba and Puzzles
#include <iostream>
using namespace std;

int main ()
{
    long long a, b, c, d;

    cin >> a >> b >> c >> d;
    ((a+b*c)==d || (a+b-c)==d || (a*b-c)==d || (a*b+c)==d || (a-b*c)==d || (a-b+c)==d )? cout << "YES": cout << "NO";

    return 0;
}
*/
