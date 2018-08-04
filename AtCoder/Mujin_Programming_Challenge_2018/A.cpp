#include <iostream>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool solve (string s) {
  const string mujin = "MUJIN";
  for (size_t i = 0; i < mujin.size(); ++i) {
    if (s.size() <= i) return false;
    if (s[i] != mujin[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  if (solve(s)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
