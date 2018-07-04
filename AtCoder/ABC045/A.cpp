#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, h;
  cin >> a >> b >> h;
  cout << (a + b) * h / 2 << endl;
}
