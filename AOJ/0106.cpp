#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)
#define INF (1 << 30)

int main()
{
  int amount[] = {2, 3, 5, 10, 12, 15};
  int price[] = {380, 550, 850, 1520, 1870, 2244};
  vector<int> dp(51, INF);
  REP(i, 6)
    dp[amount[i]] = price[i];
  REP(i, 6)
    for(int j = amount[i]; j < 51; j++)
      dp[j] = min(dp[j], dp[j - amount[i]] + price[i]);
  // REP(i, 51)
  //   cout << i << " " << dp[i] << endl;
  int n;
  while(cin >> n && n){
    cout << dp[n / 100] << endl;
  }
  return 0;
}
