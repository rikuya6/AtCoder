#include <iostream>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n, k;
  cin >> n >> k;
  cout << k * int(pow(k - 1, n - 1)) << endl;
}
