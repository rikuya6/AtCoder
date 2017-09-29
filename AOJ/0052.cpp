#include <iostream>

using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  while (cin >> n, n) {
    int cnt = 0;
    for (int i = n; i > 0; --i) {
      int work = i;
      while (true) {
        if (work % 5 != 0) break;
        ++cnt;
        work /= 5;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
