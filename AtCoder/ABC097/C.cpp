#include <algorithm>
#include <string>
#include <set>
#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string solve(string& s, int k) {
  set<string> ss;
  for (int i = 0; i < s.size(); ++i) {
    for (int k = 1; k <= 5; ++k) {
      ss.insert(s.substr(i, k));
    }
  }
  int pos{};
  for (auto e : ss) {
    if (pos == k - 1)
      return e;
    ++pos;
  }
  return "-1";
}

int main() {
  string s;
  int k;
  cin >> s >> k;
  cout << solve(s, k) << endl;
}
