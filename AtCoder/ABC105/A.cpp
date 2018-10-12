#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n, k;
  cin >> n >> k;
  if (n % k == 0) cout << 0 << endl;
  else cout << 1 << endl;
}
