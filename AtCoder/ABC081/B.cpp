#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int solve(const int n, int a[200])
{
  int cnt = 0;
  bool flg = true;
  while (flg) {
    REP(i, n) {
      if (a[i] % 2 == 0)
        a[i] = a[i] / 2;
      else
        flg = false;
    }
    if (flg)
      cnt++;
  }
  return cnt;
}

int main()
{
  int n, a[200];
  cin >> n;
  REP(i, n) cin >> a[i];
  cout << solve(n, a) << endl;
}
