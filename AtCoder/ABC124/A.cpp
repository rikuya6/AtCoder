#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b;
  cin >> a >> b;
  int ans{};
  if (a < b) swap(a, b);
  ans = a;
  a--;
  if (a > b)
    ans += a;
  else
    ans += b;
  cout << ans << endl;
}
