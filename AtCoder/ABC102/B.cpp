#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  cout << abs(a[0] - *(a.end() - 1)) << endl;
}
