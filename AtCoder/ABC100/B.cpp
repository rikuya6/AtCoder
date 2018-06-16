// WA
#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int t1[101], t2[101], t3[101];

void make_table() {
  REP(i, 101) {
    t1[i] = i;
    t2[i] = i * 100;
    t3[i] = i * 10000;
  }
}

int solve(const int d, const int n) {
  make_table();
  if (d == 0)
    return t1[n];
  if (d == 1)
    return t2[n];
  if (d == 2)
    return t3[n];
  return -1;
}

int main() {
  int d, n;
  cin >> d >> n;
  cout << solve(d, n) << endl;
}
