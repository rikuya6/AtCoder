#include <algorithm>
#include <iostream>
#include <array>
using namespace std;

int main() {
  array<int, 5> a;
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  cout << a[0] << endl;
  cout << a[1] << endl;
}
