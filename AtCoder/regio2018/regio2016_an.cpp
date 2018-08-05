#include <iostream>
#include <array>
using namespace std;

int solve(array<int, 5>& a) {
  for (int i = 0 ; i < 5; ++i) {
    bool ok = true;
    for (int k = 0; k < 5; ++k) {
      if (i == k) continue;
      int n = (i + 1) % 5;
      int m = (i + 2) % 5;
      if ((a[k] - a[m]) * (n - m) != (a[n] - a[m]) * (k - m)) {
        ok = false;
      }
    }
    if (ok) return i + 1;
  }
  return -1;
}

int main() {
  array<int, 5> a;
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
  }
  cout << solve(a) << endl;
}
