#include <iostream>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  int a[n];
  REP(i, n) cin >> a[i];
  sort(a, a + n);
  int ans = 0;
  REP(i, n - 1) {
    ans -= a[i] - a[i + 1];
  }
  cout << ans << endl;
}
