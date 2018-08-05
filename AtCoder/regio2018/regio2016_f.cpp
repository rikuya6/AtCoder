#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int v = 1000 - n, ans{};
  while (v > 0) {
    // cout << v << endl;
    if (v >= 500) {
      v -= 500;
    } else if (v >= 100) {
      v -= 100;
    } else if (v >= 50) {
      v -= 50;
    } else if (v >= 10) {
      v -= 10;
    } else if (v >= 5) {
      v -= 5;
    } else {
      v -= 1;
    }
    ++ans;
  }
  cout << ans << endl;
}
