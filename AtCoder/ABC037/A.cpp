#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int min_v = min(a, b);
  cout << c / min_v << endl;
}
