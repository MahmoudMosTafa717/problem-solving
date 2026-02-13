#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int len;
    len = S.length()+1;

    string lens = to_string(len);

    if (lens.length() > 1 ){
        len = len  - 1 + lens.length();
        cout << S << len;
    } else    cout << S << len ;

    return 0;
}
