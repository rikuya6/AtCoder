#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n, k, x, y;
  cin >> n >> k >> x >> y;
  if (n > k)
    cout << k * x + (n - k) * y << endl;
  else
    cout << n * x << endl;
}
