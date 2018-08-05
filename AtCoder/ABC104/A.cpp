#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int r;
  cin >> r;
  if (r < 1200) cout << "ABC" << endl;
  else if (r < 2800) cout << "ARC" << endl;
  else cout << "AGC" << endl;
}
