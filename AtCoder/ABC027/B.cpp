#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(const int n, const vector<int>& a, const int sum) {
  if (sum % n != 0) return -1;
  int ret{}, cnt{};
  for (int i = 0; i < n - 1; ++i) {
    cnt += a[i];
    if (cnt != sum / n * (i + 1))
      ++ret;
  }
  return ret;
}

int main() {
  int n, sum{};
  cin >> n;
  vector<int> a(n);
  REP(i, n) {
    cin >> a[i];
    sum += a[i];
  }
  cout << solve(n, a, sum) << endl;
}
