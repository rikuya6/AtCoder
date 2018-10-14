#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(int n) {
  int ret = 1;
  for (int b = 1; b < n; ++b) {
    for (int p = 2; p < n; ++p) {
      int v = pow(b, p);
      // cout << v << endl;
      if (v > n) {
        break;
      }
      ret = max(ret, v);
    }
  }
  return ret;
}

int main() {
  int x;
  cin >> x;
  cout << solve(x) << endl;
}
