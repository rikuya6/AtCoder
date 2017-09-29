#include <iostream>

using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int a, b, n;
  while (cin >> a >> b >> n) {
    int s = 0;
    a %= b;
    REP(i, n) {
      a *= 10;
      s += (a / b);
      a %= b;
    }
    cout << s << endl;
  }
  return 0;
}
