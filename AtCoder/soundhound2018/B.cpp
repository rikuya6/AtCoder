#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n, l, r;
  cin >> n >> l >> r;
  REP(i, n) {
    int a;
    cin >> a;
    if (a < l)
      cout << l << endl;
    else if (a > r)
      cout << r << endl;
    else
      cout << a << endl;
  }
}
