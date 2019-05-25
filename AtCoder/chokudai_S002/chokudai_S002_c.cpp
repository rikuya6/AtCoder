#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

using ll = long long;
int n;
vector<ll> a, b;

void solve() {
  ll ans {};
  REP(i, n) {
    ans = max(ans, a[i] + b[i]);
  }
  cout << ans << endl;
}

int main() {
  cin >> n;
  REP(i, n) {
    ll in;
    cin >> in;
    a.push_back(in);
    cin >> in;
    b.push_back(in);
  }
  solve();
}
