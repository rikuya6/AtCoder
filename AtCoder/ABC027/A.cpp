#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(int l1, int l2, int l3) {
  if (l1 == l2) return l3;
  if (l2 == l3) return l1;
  if (l1 == l3) return l2;
  return -1;
}

int main() {
  int l1, l2, l3;
  cin >> l1 >> l2 >> l3;
  cout << solve(l1, l2, l3) << endl;
}
