// WA

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n, k;
string s;

int solve() {
  int kk = k, ans{}, cnt{};
  bool flg = true;
  for (size_t i = 0; i < s.size(); ++i) {
    if (s[i] == '0') {
      if (kk <= 0) {
        ans = max(ans, cnt);
        cnt = 0;
        kk = k;
        flg = true;
        i -= 2;
        continue;
      }
      if (flg && s[i + 1] == '1') {
        flg = false;
        --kk;
      }
      s[i] = '1';
      ++cnt;
    } else if (s[i] == '1') {
      flg = true;
      ++cnt;
    }
  }
  return max(ans, cnt);
}

int main() {
  cin >> n >> k >> s;
  cout << solve() << endl;
}
