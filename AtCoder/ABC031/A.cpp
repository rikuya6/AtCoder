#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, d;
  cin >> a >> d;
  cout << max((a + 1) * d, a * (d + 1)) << endl;
}
