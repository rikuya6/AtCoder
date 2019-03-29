#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  int ans = INT_MAX;
  REP(i, n) {
    string p;
    cin >> p;
    int cnt{};
    for (int i = p.size() - 1; i > 0; --i) {
      if (p[i] != '0')
        break;
      ++cnt;
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
}
