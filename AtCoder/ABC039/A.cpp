#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << 2 * (a * b + a * c + b * c) << endl;
}
