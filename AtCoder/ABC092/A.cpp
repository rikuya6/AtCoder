#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout <<  min(a, b) + min(c, d) << endl;
}
