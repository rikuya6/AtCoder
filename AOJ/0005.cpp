#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int gcd(int m, int n)
{
  int r;
  while (n != 0) {
    r = m % n;
    m = n;
    n = r;
  }
  return m;
}

int main()
{
  int a, b;
  while (cin >> a >> b) {
    int c = gcd(a, b);
    int d = a / c * b;
    cout << c << " " << d << endl;
  }
  return 0;
}
