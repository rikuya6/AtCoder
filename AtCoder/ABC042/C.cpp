#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool check(int num, const vector<bool>& d) {
  while (num > 0) {
    int i = num % 10;
    if (!d[i])
      return false;
    num /= 10;
  }
  return true;
}

int main() {
  int n, k;
  vector<bool> d(10, true);
  cin >> n >> k;
  REP(i, k) {
    int idx;
    cin >> idx;
    d[idx] = false;
  }
  for (int i = n; i <= n * 10; ++i) {
    if (check(i, d)) {
      cout << i << endl;
      break;
    }
  }
}
