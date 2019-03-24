#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool check(char c) {
  char target[] = {'A', 'C', 'G', 'T'};
  REP(l, 4){
    if (c == target[l]) {
      return true;
    }
  }
  return false;
}

int solve(string s) {
  int ret{};
  REP(i, (int)s.size()) {
    string t;
    REP(k, (int)s.size()) {
      if (check(s[i + k])) {
        t += s[i + k];
      } else {
        break;
      }
    }
    ret = max(ret, (int)t.size());
  }
  return ret;
}

int main() {
  string s;
  cin >> s;
  cout << solve(s) << endl;
}
