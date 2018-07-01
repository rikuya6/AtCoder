#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  long long a, b, c, m = 1000000007;
  cin >> a >> b >> c;
  cout << (((a * b) % m) * c) % m << endl;
}
