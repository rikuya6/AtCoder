#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n, x;
  string s;
  cin >> n >> x >> s;
  int ans{};
  REP(i, n) {
    int t;
    cin >> t;
    if (s[i] == '1') {
      ans += min(x, t);
    } else {
      ans += t;
    }
  }
  cout << ans << endl;
}
