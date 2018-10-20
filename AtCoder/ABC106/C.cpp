#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

using ll = long long;

int solve(const string& s, const ll k) {
  for (int i = 0; i < min(k, static_cast<ll>(s.size())); ++i) {
    if (s[i] >= '2') {
      return s[i] - '0';
    }
  }
  return 1;
}

int main() {
  string s;
  ll k;
  cin >> s >> k;
  cout << solve(s, k) << endl;
}
