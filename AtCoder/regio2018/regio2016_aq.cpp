#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n;
  vector<pair<int, int>> v;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;
    v.push_back(make_pair(b, a));
  }
  sort(v.begin(), v.end(), greater<pair<int, int>>());
  cout << v.front().second << endl;
}
