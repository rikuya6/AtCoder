#include <iostream>
#include <string>
#include <map>
using namespace std;

int solve(array<int, 5>& a) {
  int cnt{};
  for (int i = 0 ; i < 5; ++i) {
    for (int k = i + 1; k < 5; ++k) {
      for (int l = k + 1; l < 5; ++l) {
        if (a[i] + a[k] > a[l]) ++cnt;
      }
    }
  }
  return cnt;
}

int main() {
  int n;
  map<string, int> mp;
  cin >> n;
  while (n--) {
    string name;
    int v;
    cin >> name >> v;
    if (mp.find(name) != mp.end()) {
      mp[name] += v;
    } else {
      mp.insert(make_pair(name, v));
    }
  }
  for (auto e : mp) {
    cout << e.first << " " << e.second << endl;
  }
}
