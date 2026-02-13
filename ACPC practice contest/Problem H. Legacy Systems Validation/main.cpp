#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string s;
    cin >> s;

    set <char> st (s.begin(), s.end());
    if (st.size() <= 3){
        cout <<"YES";
    }
    else cout <<"No";

    return 0;
}
