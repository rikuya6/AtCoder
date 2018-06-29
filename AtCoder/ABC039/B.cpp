#include <iostream>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int x;
  cin >> x;
  cout << round(sqrt(sqrt(x))) << endl;
}
