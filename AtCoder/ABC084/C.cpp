#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int n;
int c[500], s[500], f[500];

void solve()
{
  for (int i = 0; i < n; i++) {
    int t = 0;
    for (int k = i; k < n - 1; k++) {
      if (t < s[k]) {
        t = s[k];
      } else if (t % f[k] != 0) {
        t += f[k] - (t % f[k]);
      }
      t += c[k];
    }
    cout << t << endl;
  }
}

int main()
{
  cin >> n;
  REP(i, n) cin >> c[i] >> s[i] >> f[i];
  solve();
}
