#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  int a[101][101];
  int dp[101][101];
  cin >> n;
  REP(i, 2)
    REP(k, n) {
      cin >> a[i][k];
      dp[i][k] = -1;
    }
  dp[0][0] = a[0][0];
  REP(i, 2) {
    REP(k, n) {
      dp[i + 1][k] = max(dp[i + 1][k], dp[i][k] + a[i + 1][k]);
      dp[i][k + 1] = max(dp[i][k + 1], dp[i][k] + a[i][k + 1]);
    }
  }
  // REP(i, 2) {
  //   REP(k, n) {
  //     cout << dp[i][k] << " ";
  //   }
  //   cout << endl;
  // }
  cout << dp[1][n - 1] << endl;
}
