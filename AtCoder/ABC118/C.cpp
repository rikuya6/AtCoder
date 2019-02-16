#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n;

int gcd(int m, int n) {
  return n == 0 ? m : gcd(n, m % n);
}

int solve(vector<int>& a) {
  int ret = a.front();
  for (int i = 1; i < n; i++) {
    ret = gcd(ret, a[i]);
  }
  return ret;
}

int main() {
  cin >> n;
  vector<int> a(n);
  REP(i, n) cin >> a[i];
  cout << solve(a) << endl;
}
