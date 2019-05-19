// WA

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string solve(string s) {
  int a = atoi(s.substr(0, 2).c_str());
  int b = atoi(s.substr(2).c_str());
  if (a <= 12 && a >= 1 && b <= 12 && b >= 1)
    return "AMBIGUOUS";
  if (a >= 1 && b <= 12 && b >= 1)
    return "YYMM";
  if (a <= 12 && a >= 1 && b >= 1)
    return "MMYY";
  return "NA";
}

int main() {
  string s;
  cin >> s;
  cout << solve(s) << endl;
}
