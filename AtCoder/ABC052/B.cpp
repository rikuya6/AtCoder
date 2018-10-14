#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(int n, string& s) {
  int x{}, ret = 0;
  REP(i, n) {
    if (s[i] == 'I')
      ++x;
    else
      --x;
    ret = max(ret, x);
  }
  return ret;
}

int main() {
  int n;
  string s;
  cin >> n >> s;
  cout << solve(n, s) << endl;
}
