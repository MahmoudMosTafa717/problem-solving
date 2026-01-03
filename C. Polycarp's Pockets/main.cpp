#include <iostream>
#include <string>
#include <vector>

using namespace std;
int n;

vector<int>arr;
vector<int>freq;

int func(){
  for (int i = 0 ; i < n ; i++ ){
    freq[arr[i]]++;
  }

  int mx = 1;
  for (int i = 0 ; i < freq.size() ; i++ ){
    if (freq[i] > mx){
      mx = freq[i];
    }
  }

  return mx;
}

int main()
{
  cin >> n;
  arr.resize(n);
  freq.resize(101, 0);

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << func();
  return 0;
}
