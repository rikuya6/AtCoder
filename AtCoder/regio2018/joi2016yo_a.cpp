#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a[4];
  for (int i = 0; i < 4; i++) {
    cin >> a[i];
  }
  sort(a, a + 4);
  int sum{};
  for (int i = 1; i < 4; i++) {
    sum += a[i];
  }
  int b1, b2;
  cin >> b1 >> b2;
  sum += max(b1, b2);
  cout << sum << endl;
}
