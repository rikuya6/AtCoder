#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool check(const string& s) {
  if (s.size() == 0) return true;
  REP(i, (int)s.size() / 2) {
    char front = s[i], tail = s[s.size() - 1 - i];
    if (tail == '#')
      continue;
    if (front != tail)
      return false;
  }
  return true;
}

int solve(string s) {
  int size = s.size();
  REP(i, size) {
    if (check(s))
      return i;
    s += '#';
  }
  return -1;
}

int main() {
  string s;
  cin >> s;
  cout << solve(s) << endl;
}
