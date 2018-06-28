#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

void solve(const int n, const int q) {
  vector<int> a(n);
  REP(i, q) {
    int l, r, t;
    cin >> l >> r >> t;
    --l, --r;
    for (int i = l; i <= r; ++i)
      a[i] = t;
  }
  for (auto e : a)
    cout << e << endl;
}

int main() {
  int n, q;
  cin >> n >> q;
  solve(n, q);
}
