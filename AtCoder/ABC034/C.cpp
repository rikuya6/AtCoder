#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int w, h;
  cin >> w >> h;
  long long dp[w + 1][h + 1];
  REP(i, w) dp[i][0] = 1;
  REP(i, h) dp[0][i] = 1;
  for (int i = 1; i < w; ++i) {
    for (int k = 1; k < h; ++k) {
      dp[i][k] = dp[i - 1][k] + dp[i][k - 1];
      dp[i][k] %= 1000000007LL;
    }
  }
  cout << dp[w - 1][h - 1] << endl;
  return 0;
}
