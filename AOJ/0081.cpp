#include <iostream>
#include <cstdio>
using namespace std;
#define REP(i ,  j) for (int i = 0; i < j; i++)

int main()
{
  double x1, y1, x2, y2, xq, yq;
  while (scanf("%lf,%lf,%lf,%lf,%lf,%lf", &x1 ,&y1 ,&x2 ,&y2 ,&xq ,&yq) != EOF) {
    double a, b; // 傾き, 切片
    double qa, qb; // 点Q, Rを線で結び、直線だと考える
    double mx, my; // 中点であり交点
    a = abs(y2 - y1) / abs(x2 - x1);
    b = y2 - a * x2;
    qa = a * -1;
    qb = yq - qa * xq;
    mx = (qb - b) / (a - qa);
    my = (qa * b - a * qb) / (qa - a);

  }
  return 0;
}
