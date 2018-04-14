#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
  int a, b, x;
  cin >> a >> b >> x;
  if (a <= x && a + b - x >= 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
