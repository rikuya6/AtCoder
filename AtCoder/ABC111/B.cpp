#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(int n) {
  int t[10]   = {100, 112, 223, 334, 445, 556, 667, 778, 889, 1000};
  int ans[9] = {111, 222, 333, 444, 555, 666, 777, 888, 999};
  for (int i = 0; i < 9; ++i) {
    if (n >= t[i] && n < t[i + 1]) {
      return ans[i];
    }
  }
  return -1;
}

int main() {
  int n;
  cin >> n;
  cout << solve(n) << endl;
}
