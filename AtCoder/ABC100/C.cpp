#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int count(int x) {
  if (x % 2 != 0) return 0;
  return count(x / 2) + 1;
}

int main() {
  int n, ans{};
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    ans += count(a);
  }
  cout << ans << endl;
}
