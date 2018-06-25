#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int x, y;
  cin >> x >> y;
  if (x < y)
    cout << "Better" << endl;
  else
    cout << "Worse" << endl;
}
