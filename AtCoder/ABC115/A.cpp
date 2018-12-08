#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int d;
  cin >> d;
  if (d == 22)
    cout << "Christmas Eve Eve Eve" << endl;
  else if (d == 23)
    cout << "Christmas Eve Eve" << endl;
  else if (d == 24)
    cout << "Christmas Eve" << endl;
  else
    cout << "Christmas" << endl;
}
