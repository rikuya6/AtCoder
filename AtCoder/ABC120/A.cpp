#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (b / a > c)
    cout << c << endl;
  else
    cout << b / a << endl;
}
