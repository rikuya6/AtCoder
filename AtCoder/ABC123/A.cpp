#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)


int a, b, c, d, e, k;

bool solve() {
  if (abs(a - b) > k)
    return false;
  if (abs(a - c) > k)
    return false;
  if (abs(a - d) > k)
    return false;
  if (abs(a - e) > k)
    return false;
  if (abs(b - c) > k)
    return false;
  if (abs(b - d) > k)
    return false;
  if (abs(b - e) > k)
    return false;
  if (abs(c - d) > k)
    return false;
  if (abs(c - e) > k)
    return false;
  if (abs(d - e) > k)
    return false;
  return true;
}

int main() {
  cin >> a >> b >> c >> d >> e >> k;
  if (solve())
    cout << "Yay!" << endl;
  else
    cout << ":(" << endl;
}

