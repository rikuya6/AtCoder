#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

void solve(int n, int y) {
  for (int i = 0; i <= n; ++i) {
    for (int k = 0; k <= n - i; ++k) {
      int l = n - i - k;
      if (i * 10000 + k * 5000 + l * 1000 == y) {
        cout << i << " " << k << " " << l << endl;
        return;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
}

int main() {
  int n, y;
  cin >> n >> y;
  solve(n, y);
}
