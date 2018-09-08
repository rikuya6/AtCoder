#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

long long gcd(long long m, long long n) {
  return n == 0 ? m : gcd(n, m % n);
}

int main() {
  long long n, x;
  vector<int> a;
  cin >> n >> x;
  REP(i, n) {
    long long ax;
    cin >> ax;
    a.push_back(abs(x - ax));
  }
  // if (n == 1) {
  //   cout << x + a[0] - 1 << endl;
  //   return 0;
  // }
  long long ans = gcd(a[0], a[1]);
  for (long long i = 2; i < n; i++) {
    ans = gcd(ans, a[i]);
  }
  cout << ans << endl;
}
