#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n, m;

int solve(vector<int>& x) {
  sort(x.begin(), x.end());
  vector<int> t(m);
  // for (auto e : x) {
  //   cout << e << " ";
  // }
  // cout << endl;
  for (int i = 0; i < (int)x.size() - 1; ++i) {
    t[i] = x[i + 1] - x[i];
    // cout << t[i] << " ";
  }
  // cout << endl;
  sort(t.begin(), t.end(), greater<int>());
  int sum{};
  FOR(i, n - 1, m) {
    sum += t[i];
  }
  // cout << sum << endl;
  return sum;
}

int main() {
  cin >> n >> m;
  vector<int> x(m);
  REP(i, m) cin >> x[i];
  cout << solve(x) << endl;
}
