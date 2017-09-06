#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int a[5];
  REP(i, 5) cin >> a[i];
  sort(a, a + 5, greater<int>());
  REP(i, 5) cout << a[i] << (i != 4 ? " " : "");
  cout << endl;
  return 0;
}
