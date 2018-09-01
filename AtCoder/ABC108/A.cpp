#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int k, even{}, odd{};
  cin >> k;
  for (int i = 1; i <= k; ++i) {
    if (i % 2 == 0) ++even;
    else ++odd;
  }
  cout << even * odd << endl;
}
