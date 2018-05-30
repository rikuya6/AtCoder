#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if ((abs(a - b) <= d && abs(b - c) <= d) || abs(a - c) <= d)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
