#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;
  --k;
  s[k] = s[k] + 32;
  cout << s <<  endl;
}
