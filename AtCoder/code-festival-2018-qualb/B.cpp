#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int t[101][101];

int solve(vector<pair<int, int>>& v, const int x, const int sum) {
  for (int i = 0; i < v.size(); ++i)
    t[0][i] = sum;
  for (int k = 1; k <= x; ++k) {
      int cv = sum - (v[0].first * v[0].second) + (v[0].first + k) * v[0].second;
      t[k][0] = cv;
  }
  for (int i = 1; i < v.size(); ++i) {
    for (int k = 1; k <= x; ++k) {
      int cv = sum - (v[i].first * v[i].second) + (v[i].first + k) * v[i].second;
      t[k][i] = max(t[k - 1][i - 1], cv);
    }
  }
  int ret{};
  for (int i = 0; i < v.size(); ++i) {
    ret = max(ret, t[x][i]);
  }

  // for (int i = 0; i < v.size(); i++) {
  //   for (int k = 0; k <= x; ++k) {
  //     cout << t[k][i] << " ";
  //   }
  //   cout << endl;
  // }
  return ret;
}

int main() {
  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> v(n), v2(n);
  int sum{};
  REP(i, n) {
    int a, b;
    cin >> a >> b;
    v[i] = make_pair(a, b);
    sum += a * b;
  }
  cout << solve(v, x, sum) << endl;
}
