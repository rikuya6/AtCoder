#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n, m, k;

bool solve() {
  for (int i = 0; i <= n; ++i) {
    for (int l = 0; l <= m; ++l) {
      if (i * (m - l) + (n - i) * l == k) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  cin >> n >> m >> k;
  if (solve())
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
