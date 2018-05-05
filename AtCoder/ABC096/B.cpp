#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int calc(const int x, const int k)
{
  int sum = x;
  REP(i, k)
    sum *= 2;
  return sum;
}

int main()
{
  int v[3];
  int k;
  REP(i, 3) cin >> v[i];
  cin >> k;
  sort(v, v + 3, greater<int>());
  cout << calc(v[0], k) + v[1] + v[2] << endl;
}
