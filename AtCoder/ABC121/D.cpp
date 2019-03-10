// https://atcoder.jp/contests/abc121/submissions/4530935
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

using ll = long long;

ll a, b;

ll calc(ll x) {
  if (x <= 0) return 0;
  ll ret{};
  ++x;
  REP(i, 50) {
    ll loop = (1LL << (i + 1));
    ll cnt = (x / loop) * (loop / 2);
    cnt += max(0LL, (x % loop) - (loop / 2));
    if (cnt % 2 != 0)
      ret += 1LL << i;
  }
  return ret;
}

ll solve(ll a, ll b) {
  return calc(b) ^ calc(a - 1);
}

int main() {
  ll a, b;
  cin >> a >> b;
  cout << solve(a, b) << endl;
}
