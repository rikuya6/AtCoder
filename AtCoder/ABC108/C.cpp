#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

long long solve(const int n, const int k) {
  vector<long long> v(k);
  for (int i = 1; i <= n; ++i) ++v[i % k];
  long long cnt{};
  for (int a = 0; a < k; ++a) {
    int b = (k - a) % k;
    int c = (k - a) % k;
    if ((b + c) % k != 0) continue;
    cnt += v[a] * v[b] * v[c];
  }
  return cnt;
}

int main() {
  int n, k;
  cin >> n >> k;
  cout << solve(n, k) << endl;
}
