#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int count(int x) {
  if (x % 100 != 0) return 0;
  return count(x / 100) + 1;
}

int main() {
  int d, n;
  cin >> d >> n;
  int cnt{};
  for (int i = 1;; ++i) {
    if (count(i) == d) {
      ++cnt;
      if (cnt == n) {
        cout << i << endl;
        break;
      }
    }
  }
}
