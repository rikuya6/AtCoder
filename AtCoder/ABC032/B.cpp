#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(string s, int k) {
  if (s.size() < k) return 0;
  unordered_set<string> set_str;
  for (int i = 0; i <= s.size() - k; ++i) {
    string sub = s.substr(i, k);
    set_str.insert(sub);
    // cout << sub << endl;
  }
  // for (auto e : set_str)
  //   cout << e << endl;
  return set_str.size();
}

int main() {
  string s;
  int k;
  cin >> s >> k;
  cout << solve(s, k) << endl;
}
