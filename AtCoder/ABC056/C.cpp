#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)


int solve(int x) {
  for (int i = 1; ; ++i) {
    x -= i;
    if (x <= 0)
      return i;
  }
}

int main() {
  int x;
  cin >> x;
  cout << solve(x) << endl;
}
