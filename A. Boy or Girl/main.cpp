#include <iostream>
#include <string>

using namespace std;

  string username;

  void  func(){
      int freq[26] = {0};

    for (char c : username) {
        freq[c - 'a']++;
    }

  int distinct_counter = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
        distinct_counter++;
        }
    }

  if (distinct_counter % 2 == 0) {
    cout << "CHAT WITH HER!" << endl;
  } else {
    cout << "IGNORE HIM!" << endl;
  }
  }

int main() {

  cin >> username;

    func();

  return 0;
}
