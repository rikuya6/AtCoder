#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int f(int n) {
  if (n % 2 == 0)
    return n / 2;
  return 3 * n + 1;
}

int solve(int s) {
  vector<int> v(1000002);
  unordered_map<int, bool> mp;
  v[0] = s;
  mp[s] = true;
  int ans = -1;
  FOR(i, 1, 1000001) {
    v[i] = f(v[i - 1]);
    auto it = mp.find(v[i]);
    if (it == mp.end()) {
      mp[v[i]] = true;
    } else {
      ans = i + 1;
      break;
    }
  }
  // for (int i = 0 ; i <= 8; ++i)
  //   cout << v[i] << " ";
  // cout << endl;

  // for (auto e : mp)
  //   cout << e.first << " ";
  // cout << endl;
  return ans;
}

int main() {
  int s;
  cin >> s;
  cout << solve(s) << endl;
}
