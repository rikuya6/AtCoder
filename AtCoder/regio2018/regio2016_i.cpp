#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int k, p;
    cin >> k >> p;
    int ans = 0;
    for (int i = 0; i < k; ++i) {
      ans = (ans + 1) % p;
    }
    if (ans == 0) ans = p;
    cout << ans << endl;
  }
}
