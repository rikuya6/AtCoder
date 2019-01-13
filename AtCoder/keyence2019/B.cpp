// WA

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool solve(string& s) {
  string keyence = "keyence";
  size_t i = 0, pos = 0;
  bool check = true;
  while (i < s.size() && pos < keyence.size()) {
    if (s[i] != keyence[pos]) {
      if (!check) return false;
      check = false;
      bool l = false;
      ++i;
      for (; i < s.size(); ++i) {
        if (s[i] == keyence[pos]) {
          l = true;
          break;
        }
      }
      if (!l)
        return false;
    }
    ++i;
    ++pos;
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  cout << (solve(s) ? "YES": "NO") << endl;
}

// keyencekeyencekeyence yes
// aaakeyence yes
// keyenceaaa yes
// eaaakeyenceaaa no
// bbbkeyenaaace no
