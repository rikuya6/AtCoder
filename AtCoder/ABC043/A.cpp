#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    ans += i;
  }
  cout << ans << endl;
}
