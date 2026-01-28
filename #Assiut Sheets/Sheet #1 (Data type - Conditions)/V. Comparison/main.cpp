#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    int nn;
    cin >> n >> c >> nn;

    if (c == '='){
        n == nn ? cout << "Right" : cout << "Wrong";
    }else
        if (c == '>'){
        n > nn ? cout << "Right" : cout << "Wrong";
    }else
        if (c == '<'){
        n < nn ? cout << "Right" : cout << "Wrong";
    }
    return 0;
}
