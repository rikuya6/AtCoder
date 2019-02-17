#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  double a, b, c;
  cin >> a >> b >> c;
  cout << setprecision(15) << c / a * b << endl;
}
