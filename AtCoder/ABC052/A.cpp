#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a * b > c * d)
    cout << a * b << endl;
  else
    cout << c * d << endl;
}
