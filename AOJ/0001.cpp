#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int d[10];
  REP(i, 10) cin >> d[i];
  sort(d, d + 10, greater<int>());
  REP(i, 3) cout << d[i] << endl;
  return 0;
}
