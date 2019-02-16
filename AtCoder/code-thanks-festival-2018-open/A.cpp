#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int ans{};
  int t, a, b, c, d;
  cin >> t >> a >> b >> c >> d;
  if (t - c >= 0) {
    ans += d;
    if (t - c - a >= 0) ans += b;
  } else {
    if (t - a >= 0) ans += b;
  }
  cout << ans << endl;
}
