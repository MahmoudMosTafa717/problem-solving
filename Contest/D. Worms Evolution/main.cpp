#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> arr;

void func(){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      int k = ++j;
      if(i != j && i != k && j != k && arr[j] + arr[k] == arr[i]){
        cout << i+1 << " " << j+1 << " " << k+1 << endl;
        return;
      }
    }
  }
  cout << -1 << endl;
}

int main()
{
  cin >> n;
  arr.resize(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  func();
  return 0;
}
