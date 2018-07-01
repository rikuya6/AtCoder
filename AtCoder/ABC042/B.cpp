#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n, l;
  vector<string> s;
  cin >> n >> l;
  REP(i, n) {
    string in_s;
    cin >> in_s;
    s.push_back(in_s);
  }
  sort(s.begin(), s.end());
  string ans;
  REP(i, n) {
    ans += s[i];
  }
  cout << ans << endl;
}
