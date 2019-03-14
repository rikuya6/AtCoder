#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  int ans = 1 << 30;
  REP(i, n) {
    int a;
    cin >> a;
    int cnt{};
    while (a % 2 == 0) {
      a /= 2;
      ++cnt;
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
}
