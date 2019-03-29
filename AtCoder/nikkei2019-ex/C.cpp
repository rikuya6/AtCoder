#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(const int n) {
  return n % 11;
}

int main() {
  int n;
  cin >> n;
  cout << solve(n) << endl;
}
