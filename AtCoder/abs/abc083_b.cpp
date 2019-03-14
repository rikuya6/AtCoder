#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int calc(int i, int sum) {
  if (i / 10 == 0 && i % 10 == 0) return sum;
  return calc(i / 10, sum + (i % 10));
}

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int ans{};
  for (int i = 1; i <= n; ++i) {
    int sum = calc(i, 0);
    // cout << i << " " << sum << endl;
    if (sum >= a && sum <= b) {
      // cout << "sum: " << sum << endl;
      ans += i;
    }
  }
  cout << ans << endl;
}
