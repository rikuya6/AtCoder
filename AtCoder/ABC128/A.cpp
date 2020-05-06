#include <algorithm>
#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, p;
  cin >> a >> p;
  p += a * 3;
  cout << p / 2 << endl;
}
