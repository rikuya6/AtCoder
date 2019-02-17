#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  string x, y;
  cin >> x >> y;
  if (x[0] == 'S' && y[0] == 'H')
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
