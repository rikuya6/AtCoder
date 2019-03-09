#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

using ll = long long;

ll solve(const int n) {
  ll ret = 1;
  for (ll i = 1; i < n; ++i) {
    if (pow(i, 2) <= n)
      ret = max(ret, i);
  }
  return ret;
}

int main() {
  int n;
  cin >> n;
  cout << solve(n) << endl;
}
