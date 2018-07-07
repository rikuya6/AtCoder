#include <iostream>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string solve(string& s, int w) {
  string ans;
  for (size_t i = 0; i < s.size(); i += w) {
    ans += s[i];
  }
  return ans;
}

int main() {
  string s;
  int w;
  cin >> s >> w;
  cout << solve(s, w) << endl;
}
