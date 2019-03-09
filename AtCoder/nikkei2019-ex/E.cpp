#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

void solve(const int n) {
  FOR(i, 1, n + 1) {
    if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) cout << i;
    else {
      if (i % 2 == 0) cout << 'a';
      if (i % 3 == 0) cout << 'b';
      if (i % 4 == 0) cout << 'c';
      if (i % 5 == 0) cout << 'd';
      if (i % 6 == 0) cout << 'e';
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  solve(n);
}
