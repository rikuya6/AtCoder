#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  double v[] = {0, 0.2, 0.6, 1.1, 2.1};
  double l, r;
  int l_count[4], r_count[4];
  fill(l_count, l_count + 4, 0); fill(r_count, r_count + 4, 0);
  while (cin >> l >> r ) {
    REP(i, 4) {
      if (l >= v[i] && l < v[i + 1]) {
        l_count[i]++;
      }
      if (r >= v[i] && r < v[i + 1]) {
        r_count[i]++;
      }
    }
  }
  for (int i = 3; i >= 0; i--) {
    cout << l_count[i] << " " << r_count[i] << endl;
  }
  return 0;
}
