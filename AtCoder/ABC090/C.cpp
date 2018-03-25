#include <iostream>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
  long long n, m;
  cin >> n >> m;
  cout << abs((n - 2) * (m - 2)) << endl;
}
