#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n, m;

bool solve(vector<int>& d) {
  sort(d.begin(), d.end());
  REP(i, m) {
    int t;
    cin >> t;
    auto p = lower_bound(d.begin(), d.end(), t);
    if (p == d.end())
      return false;
    if (*p != t)
      return false;
    // cout << *p << endl;
    d.erase(p);
  }
  return true;
}

int main() {
  cin >> n;
  vector<int> d(n);
  REP(i, n) cin >> d[i];
  cin >> m;
  if (solve(d))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
