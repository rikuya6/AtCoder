#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  REP(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  long long ans{};
  REP(i, k) {
    ans += a[i] + i;
  }
  cout << ans << endl;
}
