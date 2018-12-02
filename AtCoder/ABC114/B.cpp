#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(string& s) {
  int ans = 1 << 29;
  for (int i = 0; i <= (int)s.size() - 3; ++i) {
    string ss;
    for (int k = i, cnt = 0; k < s.size() && cnt != 3; ++k, cnt++) {
      ss += s[k];
    }
    ans = min(abs(stoi(ss) - 753), ans);
    // cout << ss << endl;
  }
  return ans;
}

int main() {
  string s;
  cin >> s;
  cout << solve(s) << endl;
}
