#include <iostream>
#include <numeric>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int gcd(int m, int n) {
  int r;
  while (n != 0) {
    r = m % n;
    m = n;
    n = r;
  }
  return m;
}

int lcm(int m, int n) { return (m * n) / gcd(m, n); }

int main() {
  int n;
  cin >> n;
  cout << lcm(n, 2) << endl;
}
