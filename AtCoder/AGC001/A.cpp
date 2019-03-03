#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  vector<int> l(n * 2);
  REP(i, n * 2) cin >> l[i];
  sort(l.begin(), l.end());
  int sum{};
  for (int i = 0; i < n * 2; i += 2) {
    sum += min(l[i], l[i + 1]);
    // cout << l[i] << " " << l[i + 1] << endl;
  }
  cout << sum << endl;
}
