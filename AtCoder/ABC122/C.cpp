#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)


int n, q;
string s;

void solve() {
  vector<int> t(100001);
  for (int i = 1; i < (int)s.size(); i++) {
    t[i] = t[i - 1];
    if (s[i - 1] == 'A' && s[i] == 'C') {
      t[i]++;
    }
  }
  // REP(i, 10) {
  //   cout << t[i] << " ";
  // }
  // cout << endl;
  REP(i, q) {
    int l, r;
    cin >> l >> r;
    // cout << t[r - 1] << " " << t[l- 1g] << endl;
    cout << t[r - 1] - t[l - 1] << endl;
  }
}

int main() {
  cin >> n >> q >> s;
  solve();
}
