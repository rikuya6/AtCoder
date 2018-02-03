#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int cnt = 0;
  REP (i, a + 1) {
    REP (k, b + 1) {
      REP (j, c + 1) {
        if ((500 * i) + (100 * k) + (50 * j) == x) {
          ++cnt;
        }
      }
    }
  }
  cout << cnt << endl;
}
