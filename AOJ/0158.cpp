#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  while (cin >> n, n) {
    int cnt = 0;
    while (n != 1) {
      if (n % 2 == 0) n /= 2;
      else n = n * 3 + 1;
      cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}
