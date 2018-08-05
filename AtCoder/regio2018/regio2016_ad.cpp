#include <iostream>
#include <array>
using namespace std;

int solve(array<int, 5>& a) {
  int cnt{};
  for (int i = 0 ; i < 5; ++i) {
    for (int k = i + 1; k < 5; ++k) {
      for (int l = k + 1; l < 5; ++l) {
        if (a[i] + a[k] > a[l]) ++cnt;
      }
    }
  }
  return cnt;
}

int main() {
  array<int, 5> a;
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
  }
  cout << solve(a) << endl;
}
