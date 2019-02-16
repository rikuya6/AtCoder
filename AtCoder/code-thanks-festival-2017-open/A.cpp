#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int ans {};
  REP(i, 8) {
    int t;
    cin >> t;
    ans = max(ans, t);
  }
  cout << ans << endl;
}
