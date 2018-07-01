#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  bool t = false;
  if (a == 5 && b == 5 && c == 7)
    t = true;
  else if (a == 5 && b == 7 && c == 5)
    t = true;
  else if (a == 7 && b == 5 && c == 5)
    t = true;
  if (t)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
