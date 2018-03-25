#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
  int a, b, cnt = 0;
  cin >> a >> b;
  FOR(i, a, b + 1) {
    int o, p, q, r;
    o = i % 10;
    p = i / 10 % 10;
    q = i / 1000 % 10;
    r = i / 10000 % 10;
    if (o == r && p == q)
      ++cnt;
  }
  cout << cnt << endl;
}
