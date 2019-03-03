#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string solve(int a, int b) {
  if (a < 0 && b < 0) {
    if ((abs(a + b) - 1) % 2 == 0)
      return "Positive";
    else
      return "Negative";
  } else if (a > 0 && b > 0) {
    return "Positive";
  }
  return "Zero";
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << solve(a, b) << endl;
}
