#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  string s;
  cin >> s;
  bool c = false, ans = false;
  for (auto e : s) {
    if (e == 'C')
      c = true;
    if (c && e == 'F')
      ans = true;
  }
  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
