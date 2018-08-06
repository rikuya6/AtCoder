#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long sum = 0LL, ans = 0LL;
  while (n--) {
    int a;
    cin >> a;
    sum += a;
    sum = max(0LL, sum);
    ans = max(ans, sum);
  }
  cout << ans << endl;
}
