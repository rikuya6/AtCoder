#include <iostream>
using namespace std;

int main() {
  int sum, a[3], b[3];
  cin >> sum;
  for (int i = 0; i < 3; ++i) cin >> a[i];
  for (int i = 0; i < 3; ++i) cin >> b[i];
  for (int i = 0; i < 3; ++i) {
    sum += a[i] * b[i];
  }
  cout << sum << endl;
}
