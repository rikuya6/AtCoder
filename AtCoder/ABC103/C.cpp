#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, n) cin >> a[i];
  cout << accumulate(a.begin(), a.end(), 0)  - n << endl;
  return 0;
}
