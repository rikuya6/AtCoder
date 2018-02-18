#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int solve(const int n, int a[100])
{
  sort(a, a + n, greater<int>());
  int score1 = 0, score2 = 0;
  REP(i, n) {
    if (i % 2 == 0)
      score1 += a[i];
    else
      score2 += a[i];
  }
  return score1 - score2;
}

int main()
{
  int n;
  int a[100];
  cin >> n;
  REP(i, n) cin >> a[i];
  cout << solve(n, a) << endl;
}
