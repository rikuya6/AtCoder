#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string solve(const string& s) {
  string ret;
  for (const auto e : s) {
    if (e == '0') {
      ret += '0';
    } else if (e == '1') {
      ret += '1';
    } else {  // 'B'
      if (!ret.empty()) ret.pop_back();
    }
  }
  return ret;
}

int main() {
  string s;
  cin >> s;
  cout << solve(s) << endl;
}
