#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  vector<int> a(3);
  REP(i, 3) cin >> a[i];
  sort(a.begin(), a.end());
  cout << abs(a[1] - a[0]) + abs(a[1] - a[2]) << endl;
}
