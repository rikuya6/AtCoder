#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n, a, b;
string s;

void solve() {
  int a_cnt{}, b_cnt{};
  REP(i, n) {
    char t = s[i];
    if (t == 'a' && a_cnt + b_cnt < a + b) {
      cout << "Yes" << endl;
      ++a_cnt;
    }else if (t == 'b' && a_cnt + b_cnt < a + b && b_cnt + 1 <= b) {
      cout << "Yes" << endl;
      ++b_cnt;
    } else {
      cout << "No" << endl;
    }
  }
}

int main() {
  cin >> n >> a >> b >> s;
  solve();
}
