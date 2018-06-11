#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (size_t i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int dp[100000 + 1][100];

int solve(int n) {
  vector<int> coins(1, 1);
  for (auto i = 6; i <= n; i *= 6)
    coins.push_back(i);
  for (auto i = 9; i <= n; i *= 9)
    coins.push_back(i);
  sort(coins.begin(), coins.end());
  REP(i, coins.size())
    dp[0][i] = 0;
  FOR(i, 1, n + 1)
    dp[i][0] = i;
  FOR(i, 1, n + 1) {
    FOR(k, 1, coins.size()) {
      dp[i][k] = dp[i][k - 1];
      if (i >= coins[k]) {
        dp[i][k] = min(dp[i][k], 1 + dp[i - coins[k]][k]);
      }
    }
  }
  int cnt = n;
  REP(i, coins.size())
    cnt = min(cnt, dp[n][i]);
  return cnt;
}

int main() {
  int n;
  cin >> n;
  cout << solve(n) << endl;
}
