#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)


int solve(const vector<int>& a, const int n) {
  vector<int> dp(n);
  dp[1] = abs(a[1] - a[0]);
  for (int i = 2; i < n; ++i) {
    dp[i] = min(dp[i - 2] + abs(a[i - 2] - a[i]), dp[i - 1] + abs(a[i - 1] - a[i]));
  }
  // REP(i, n)
  //   cout << dp[i] << " ";
  // cout << endl;
  return dp[n - 1];
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, n)
    cin >> a[i];
  cout << solve(a, n) << endl;
}
