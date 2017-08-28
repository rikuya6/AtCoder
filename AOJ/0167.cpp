#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  while (cin >> n, n) {
    int a[n], cnt = 0;
    REP(i, n) cin >> a[i];
    for (int i = n - 1; i > 0; i--) {
      for (int k = 0; k < i; k++) {
        if (a[k] > a[k + 1]) {
          swap(a[k], a[k + 1]);
          cnt++;
        }
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
