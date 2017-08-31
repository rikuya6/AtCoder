#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int get_digits(int n)
{
  int cnt = 0;
  while (n != 0) {
    n /= 10;
    cnt++;
  }
  return cnt;
}

int main()
{
  int a, b;
  while (cin >> a >> b) {
    cout << get_digits(a + b) << endl;
  }
  return 0;
}
