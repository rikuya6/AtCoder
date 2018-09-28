#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, n;
  cin >> a >> b >> n;
  for (int i = n; i < a * b * n; ++i) {
    if (i % a == 0 && i % b == 0) {
      cout << i << endl;
      break;
    }
  }
}
