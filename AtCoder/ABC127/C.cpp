#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n, m;
vector<int> l, r;

void solve() {
  int ll = l.front(), rr = r.front();
  FOR(i, 1, m) {
    ll = max(ll, l[i]);
    rr = min(rr, r[i]);
  }
  // cout << ll << " " << rr << endl;
  int ans{};
  FOR(i, 1, n + 1) {
    if (i >= ll && i <= rr)
      ++ans;
  }
  cout << ans << endl;
}

int main() {
  cin >> n >> m;
  REP(i, m) {
    int in;
    cin >> in;
    // --in;
    l.push_back(in);
    cin >> in;
    // --in;
    r.push_back(in);
  }
  solve();
}
