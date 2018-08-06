#include <algorithm>
#include <iostream>
#include <vector>
#define INF 1 << 30;
using namespace std;


int n, m;
vector<int> d, c;
int dp[1001][1001];

int solve() {
  for (int i = 0; i < n; ++i) {
    for (int k = 0; k < m; ++k)
      dp[i][k] = INF;
  }

  for (int i = 0; i < m - (n - 1); ++i) dp[0][i] = d[0] * c[i];

  for (int i = 1; i < n; ++i) {
    for (int k = i; k < m - (n - 1) + i ; ++k) {
      dp[i][k] = min(dp[i - 1][k - 1] + d[i] * c[k], dp[i][k - 1]);
    }
  }

  // for (int i = 0; i < n; ++i) {
  //   for (int k = 0; k < m; ++k) {
  //     cout << dp[i][k] << " ";
  //   }
  //   cout << endl;
  // }
  return dp[n - 1][m - 1];
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    int in_d;
    cin >> in_d;
    d.push_back(in_d);
  }
  for (int i = 0; i < m; ++i) {
    int in_c;
    cin >> in_c;
    c.push_back(in_c);
  }
  cout << solve() << endl;
}
