#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool solve(const string& s) {
  for (const auto e : s) {
    switch (e) {
      case 'N':
        if (s.find("S") == string::npos)
          return false;
        break;
      case 'S':
        if (s.find("N") == string::npos)
          return false;
        break;
      case 'W':
        if (s.find("E") == string::npos)
          return false;
        break;
      case 'E':
        if (s.find("W") == string::npos)
          return false;
        break;
      default:
        break;
    }
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  if (solve(s))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
