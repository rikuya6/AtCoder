#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n, a;
  cin >> n;
  array<int, 100003> dp;
  fill(dp.begin(), dp.end(), 0);
  REP(i, n) {
    cin >> a;
    ++dp[a];
    ++dp[a - 1];
    ++dp[a + 1];
  }
  cout << *max_element(dp.begin(), dp.end()) << endl;
  return 0;
}
