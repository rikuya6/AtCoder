#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(const vector<int>& a, const int n) {
  int ans = 1 << 30;
  for (int i = -100; i <= 100; ++i) {
    int sum {};
    for (auto e : a) {
      sum += (e - i) * (e - i);
    }
    ans = min(ans, sum);
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, n) cin >> a[i];
  cout << solve(a, n) << endl;
}
