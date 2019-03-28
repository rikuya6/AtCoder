#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool solve(string& s) {
  for (size_t i = 0; i <= s.size(); ++i) {
    for (size_t l = i; l <= s.size(); ++l) {
      string t;
      for (size_t k = 0; k < s.size(); ++k) {
        if (k >= i && k <= l)
          continue;
        t += s[k];
      }
      // cout << t << endl;
      if (t == "keyence") return true;
    }
  }
  return false;
}

int main() {
  string s;
  cin >> s;
  cout << (solve(s) ? "YES" : "NO") << endl;
}

// keyencekeyencekeyence yes
// aaakeyence yes
// keyenceaaa yes
// eaaakeyenceaaa no
// bbbkeyenaaace no
