#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int f(int i) {
  return floor((pow(i, 2) + 4.0) / 8.0);
}

int main() {
  // cout << f(10) << endl;
  cout << f(f(f(20))) << endl;
}
