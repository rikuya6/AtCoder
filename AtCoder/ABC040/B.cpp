#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  int ans = 1 << 29;
  int x{1};
  while (x <= n) {
    int y = n / x;
    int r = n % x;
    ans = min(ans, abs(y - x) + r);
    ++x;
  }
  cout << ans << endl;
}
