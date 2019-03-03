#include <algorithm>
#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int a, b, k;

int solve() {
  set<int> v;
  v.insert(1);
  for (int i = 1; i <= a * b - 1; ++i) {
    if (a % i == 0 && b % i == 0) {
      v.insert(i);
    }
  }
  vector<int> vv;
  for (auto e : v) {
    vv.push_back(e);
    // cout << e << endl;
  }
  sort(vv.begin(), vv.end(), greater<int>());
  if (vv.size() >= 2)
    return vv[k - 1];
  return vv.front();
}

int main() {
  cin >> a >> b >> k;
  cout << solve() << endl;
}
