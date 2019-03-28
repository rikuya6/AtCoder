#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << a * 1728 + b * 144 + c * 12 + d << endl;
}
