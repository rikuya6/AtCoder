// 解けてない

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

using ll = long long;
vector<string> v(51);

string make(int level) {
  if (v[level] != "") {
    return v[level];
  }
  return v[level] = "B" + make(level - 1) + "P" + make(level - 1) + "B";
}

ll solve(int n, ll x) {
  v[0] = "P";
  string hamburger = make(n);
  cout << hamburger << endl;
  ll cnt{};
  for (ll i = 0; i < x / 2; ++i) {
    if (hamburger[i] == 'P')
      ++cnt;
  }
  return cnt;
}

int main() {
  int n;
  ll x;
  cin >> n >> x;
  cout << solve(n, x) << endl;
}
