#include <iostream>
#include <cstdio>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  double a;
  while (cin >> a) {
    double before = a, sum = a;
    REP(i, 9) {
      if (i % 2 == 0) {
        sum += before * 2;
        before = before * 2;
      }else{
        sum += before / 3;
        before = before / 3;
      }
    }
    printf("%.8f\n", sum);
  }
  return 0;
}
