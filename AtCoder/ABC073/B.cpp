#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n, l, r, sum = 0;
  cin >> n;
  while (n--) {
    cin >> l >> r;
    if (l - r == 0) ++sum;
    else sum += r - l + 1;
  }
  cout << sum << endl;
  return 0;
}
