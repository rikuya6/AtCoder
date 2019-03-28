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
  int ans, p{};
  REP(i, n) {
    int a, b;
    cin >> a >> b;
    if (p < a) {
      p = a;
      ans = a + b;
    }
  }
  cout << ans << endl;
}
