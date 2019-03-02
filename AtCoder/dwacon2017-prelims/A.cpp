#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  if (n < a + b)
    cout << a + b - n << endl;
  else
    cout << 0 << endl;
}
