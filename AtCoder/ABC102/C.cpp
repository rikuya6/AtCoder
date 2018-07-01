#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, n) {
    cin >> a[i];
    a[i] -= i + 1;
  }
  sort(a.begin(), a.end());
  long long ans = 0;
  long long mid = a[n / 2];
  for (int i = 0; i < n; ++i) {
    ans += abs(a[i] - mid);
  }
  cout << ans << endl;
}

