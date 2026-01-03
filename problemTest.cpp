#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int w;
string func(){
    if(w%2==0 && w>2) return "YES";
    else return "NO";
}
int main() {
    cin >> w;
    cout << func() << endl;
    return 0;
}