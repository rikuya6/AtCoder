#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n;
string a, b, c;
int solve() {
  vector<vector<int>> t(3, vector<int>(n));
  REP(i, n) {
    if (a[i] != b[i])
      ++t[0][i];
  }
  REP(i, n) {
    if (a[i] != c[i])
      ++t[1][i];
  }
  REP(i, n) {
    if (b[i] != c[i])
      ++t[2][i];
  }
  int ret{};
  REP(i, n) {
    int sum{};
    REP(k, 3) {
      if (t[k][i] > 0)
        ++sum;
    }
    if (sum == 2)
      ++ret;
    else if (sum == 3)
      ret += 2;
  }
  return ret;
}

int main() {
  cin >> n >> a >> b >> c;
  cout << solve() << endl;
}

// z e n k o k u
// t o u i t s u
// p r o g r a m

// 1 1 1 1 1 1 0
// 1 1 1 1 1 1 1
// 1 1 1 1 1 1 1
