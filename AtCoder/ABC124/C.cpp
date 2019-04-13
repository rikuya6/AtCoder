#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string s;

int solve() {
  int ans1{}, ans2{};
  for (size_t i = 0; i < s.size(); ++i) {
    if (i % 2 == 0) {
      if (s[i] == '1') ++ans1;
    } else {
      if (s[i] == '0') ++ans1;
    }
  }
  for (size_t i = 0; i < s.size(); ++i) {
    if (i % 2 == 0) {
      if (s[i] == '0') ++ans2;
    } else {
      if (s[i] == '1') ++ans2;
    }
  }
  return min(ans1, ans2);
}

int main() {
  cin >> s;
  cout << solve() << endl;
}
