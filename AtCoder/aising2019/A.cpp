#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n, h, w;
  cin >> n >> h >> w;
  cout << (n - h + 1) * (n - w + 1) << endl;
}

