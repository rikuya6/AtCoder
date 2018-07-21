#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string solve(string s, string t) {
  for (size_t i = 0; i < s.size(); ++i) {
    s.push_back(s.front());
    s.erase(s.begin());
    // cout << s << endl;
    if (s == t) {
      return "Yes";
    }
  }
  return "No";
}

int main() {
  string s, t;
  cin >> s >> t;
  cout << solve(s, t) << endl;
}
