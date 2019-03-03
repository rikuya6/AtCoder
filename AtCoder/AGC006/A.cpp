#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n;

int solve(string& s, string& t) {
  if (s == t) return n;
  int k{};
  for (int i = 0; i < n; ++i) {
    for (; k < n; k++) {
      if (s[i] != t[k])
        break;
    }
  }
  // cout << k << endl;
  if (k == 0 && s.back() ==  t.front()) {
    ++k;
  }
  return n * 2 - k;
}

int main() {
  string s, t;
  cin >> n >> s >> t;
  cout << solve(s, t) << endl;
}
