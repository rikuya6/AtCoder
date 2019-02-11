#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(int x, int y) {
  if (x % y == 0)
    return -1;
  return x;
}

int main() {
  int x, y;
  cin >> x >> y;
  cout << solve(x, y) << endl;
}
