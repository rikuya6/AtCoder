#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int l, h;

int solve(const int e) {
  if (e < l) {
    return l - e;
  } else if (e > h) {
    return -1;
  }
  return 0;
}

int main() {
  int n;
  cin >> l >> h >> n;
  vector<int> a(n);
  REP(i, n) cin >> a[i];
  for (int e : a) {
    cout << solve(e) << endl;
  }
}
