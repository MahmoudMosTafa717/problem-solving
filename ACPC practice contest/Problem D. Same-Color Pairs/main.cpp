#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;
    vector<int> freq (26,0);


    for (char c : S){
        freq[c-'a']++;
    }

    long long pairs = 0;

    for (int f : freq){
        pairs += f/2;
    }

    cout << pairs;

    return 0;
}
