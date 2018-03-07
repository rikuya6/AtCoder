#include <iostream>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

typedef long long ll;

int main()
{
  int n;
  cin >> n;
  string march = "MARCH";
  string s;
  ll d[5];
  fill(d, d + 5, 0);
  REP(i, n) {
    cin >> s;
    REP(k, 5) {
      if (s[0] == march[k]) {
        d[k]++;
        break;
      }
    }
  }
  ll ans = 0LL;
  REP(i, 3) {
    FOR(k, i + 1, 4) {
      FOR(m, k + 1, 5) {
        ans += d[i] * d[k] * d[m];
      }
    }
  }
  cout << ans << endl;
}
