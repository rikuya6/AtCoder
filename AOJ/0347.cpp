#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

inline double calc(double& a, double& b, double& c, double& d)
{
  // cout << a << " " << b << " " << c << " " << d << endl;
  return (a + b) / (c - d);
}

int main()
{
  int n;
  double e[1000];
  cin >> n;
  REP(i, n)
    cin >> e[i];
  sort(e, e + n);
  reverse(e, e + n);
  double ans = -1;
  for(int i = 0; i < n - 3; i++) { // 特殊なパターン?
    ans = max(ans, calc(e[2 + i], e[3 + i], e[0 + i], e[1 + i]));
    ans = max(ans, calc(e[0 + i], e[3 + i], e[1 + i], e[2 + i]));
    // cout << e[0 + i] << " " << e[1 + i] << " " << e[2 + i] << " " << e[3 + i] << endl;
  }
  for(int i = 2; i + 1 < n; i++) {
    ans = max(ans, calc(e[0], e[1], e[i], e[i + 1]));
  }
  printf("%.6f\n", ans);
  return 0;
}
