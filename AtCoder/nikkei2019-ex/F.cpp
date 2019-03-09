// よく分からない
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

using ll = long long;

ll solve(const int p) {
  ll x = 1789997546303LL;
  for (ll i = 0; i < 1000 - p; ++i) {
    if(x % 2 == 0) x = x / 2;
    else x = x * 3 + 1;
  }
  return x;
}

int main() {
  int p;
  cin >> p;
  cout << solve(p) << endl;
}
