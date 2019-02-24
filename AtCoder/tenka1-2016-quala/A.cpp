#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int sum{};
  FOR(i, 1, 101) {
    if (i % 3 != 0 && i % 5 != 0 && i % 15 != 0)
      sum += i;
  }
  cout << sum << endl;
}
