#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n, x;
int m[1000];

int main()
{
  int cnt = 0;
  cin >> n >> x;
  REP(i, n) {
    cin >> m[i];
    x -= m[i];
    ++cnt;
  }
  sort(m, m + n);
  cnt += x / m[0];
  cout << cnt << endl;
}
