#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b;
  cin >> a >> b;
  if (a >= 13)
    cout << b << endl;
  else if (a >= 6)
    cout << b / 2 << endl;
  else
    cout << 0 << endl;
}
