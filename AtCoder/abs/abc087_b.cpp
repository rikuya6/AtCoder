#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int ans{};
  for (int i = 0; i <= a; ++i) {
    for (int k = 0; k <= b; ++k) {
      for (int l = 0; l <= c; ++l) {
        if (i * 500 + k * 100 + l * 50 == x)
          ++ans;
      }
    }
  }
  cout << ans << endl;
}
