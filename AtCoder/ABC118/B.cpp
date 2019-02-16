#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n, m;
int solve() {
  map<int, int> mp;
  REP(i, n) {
    int k;
    cin >> k;
    REP(l, k) {
      int a;
      cin >> a;
      ++mp[a];
    }
  }
  int ret;
  for (auto e : mp) {
    // cout << e.first << " " << e.second << endl;
    if (e.second == n)
      ++ret;
  }
  return ret;
}

int main() {
  cin >> n >> m;
  cout << solve() << endl;
}
