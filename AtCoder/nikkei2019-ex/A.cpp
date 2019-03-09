#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

void solve(string s) {
  for (size_t i = 1; i <= s.size(); ++i) {
    cout << i << endl;
  }
}

int main() {
  string s;
  cin >> s;
  solve(s);
}
