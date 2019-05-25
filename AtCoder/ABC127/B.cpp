#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int r, d, x;

void solve() {
  REP(i, 10) {
    x = r * x - d;
    cout << x << endl;
  }
}

int main() {
  cin >> r >> d >> x;
  solve();
}
