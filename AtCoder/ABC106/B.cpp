#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(int n) {
  int ret{};
  for (int i = 1; i <= n; i += 2) {
    int cnt{};
    for (int k = 1; k <= i; ++k) {
      if (i % k == 0)
        ++cnt;
    }
    if (cnt == 8)
      ++ret;
  }
  return ret;
}

int main() {
  int n;
  cin >> n;
  cout << solve(n) << endl;
}
