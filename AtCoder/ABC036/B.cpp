#include <iostream>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

void solve(const string s[], const int n) {
  REP(i, n) {
    for (int k = n - 1; k >= 0 ; --k) {
      cout << s[k][i];
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  string s[n];
  REP(i, n)
    cin >> s[i];
  solve(s, n);
}
