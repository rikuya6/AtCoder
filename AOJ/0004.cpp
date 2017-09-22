#include <iostream>
#include <cstdio>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  double a, b, c, d, e, f;
  double x, y;
  while (cin >> a >> b >> c >> d >> e >> f) {
    x = (e * c - b * f) / (e * a - b * d); // 方程式を式変形する
    y = (d * c - a * f) / (d * b - a * e);
    if (x == -0)
      x = 0;
    if (y == -0)
      y = 0;
    printf("%.3f %.3f\n", x, y);
  }
  return 0;
}
