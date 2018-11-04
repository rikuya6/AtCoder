#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(int n, int t, int a, vector<int>& h) {
  vector<pair<int, int>> x;
  REP(i, n) {
    x.emplace_back((a - (t - h[i] * 0.006)), i);
  }
  sort(x.begin(), x.end());
  // for (auto e : x) {
  //   cout << e.second << " " << e.first << endl;
  // }
  return x.front().second + 1;
}

int main() {
  int n, t, a;
  cin >> n >> t >> a;
  vector<int> h(n);
  REP(i, n) cin >> h[i];
  cout << solve(n, t, a, h) << endl;
}
