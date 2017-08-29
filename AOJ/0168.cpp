#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
 int SIZE = 100;
 int dp[SIZE];
 dp[0] = 1, dp[1] = 1, dp[2] = 2;
  for (int i = 3; i < SIZE; i++) {
    dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
 }
 int n;
 while (cin >> n, n) {
   cout << dp[n] / 365 / 10 + 1 << endl;
 }
 return 0;
}
