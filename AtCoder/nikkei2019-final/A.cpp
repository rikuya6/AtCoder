#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n), t(n + 1);
  REP(i, n) {
    cin >> a[i];
  }
  REP(i, n) {
    ll sum{};
    FOR(k, i, n) {
      sum += a[k];
      t[k - i + 1] = max(t[k - i + 1], sum);
    }
  }
  FOR(i, 1, n + 1) {
    cout << t[i] << endl;
  }
}
