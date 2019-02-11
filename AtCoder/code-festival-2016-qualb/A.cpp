#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  string s, t = "CODEFESTIVAL2016";
  cin >> s;
  int cnt{};
  REP(i, s.size()) {
    if (s[i] != t[i])
      ++cnt;
  }
  cout << cnt << endl;
}
