#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string solve(int n) {
  string ret = "1";
  for (int i = 0; i < n - 1; ++i) {
    ret += "0";
  }
  return ret;
}

int main() {
  int n;
  cin >> n;
  cout << solve(n) << endl;
}
