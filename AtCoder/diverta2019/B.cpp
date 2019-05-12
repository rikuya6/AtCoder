// 解説どおり
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int r, g, b, n;

int solve() {
  int cnt{};
  REP(i, 3001) {
    REP(k, 3001) {
      int m = i * r + k * g;
      if (n >= m && (n - m) % b == 0)
        ++cnt;
    }
  }
  return cnt;
}

int main() {
  cin >> r >> g >> b >> n;
  cout << solve() << endl;
}
