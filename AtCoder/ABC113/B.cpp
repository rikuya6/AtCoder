#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n, t, a;

double f(const int x) {
  return t - x * 0.006;
}

int main() {
  cin >> n >> t >> a;
  pair<double, int> p{INT_MAX, INT_MAX};
  REP(i, n) {
    int h;
    cin >> h;
    p = min(p, {abs(a - f(h)), i + 1});
  }
  cout << p.second << endl;
}
