#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

const int c = 4, d = 7;

int solve(int n) {
  for (int i = 0; i <= 100; ++i) {
    for (int k = 0; k <= 100; ++k) {
      if (c * i + d * k == n) return true;
    }
  }
  return false;
}

int main() {
  int n;
  cin >> n;

  if (solve(n)) cout << "Yes" << endl;
  else cout << "No" << endl;
}
