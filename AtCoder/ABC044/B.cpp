#include <algorithm>
#include <iostream>
#include <map>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string solve(const string& w) {
  map<char, int> mp;
  for (auto c : w) {
    if (mp.find(c) == mp.end()) {
      mp.insert(make_pair(c, 1));
    } else {
      ++mp[c];
    }
  }

  for (auto p : mp) {
    if (p.second % 2 != 0) return "No";
  }
  return "Yes";
}

int main() {
  string w;
  cin >> w;
  cout << solve(w) << endl;
}
