#include <algorithm>
#include <iostream>
#include <array>
using namespace std;

int main() {
  array<int, 5> a;
  int sum{};
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a.begin(), a.end(), greater<int>());
  sum -= a.front();
  sum -= a.back();
  cout << sum << endl;
}
