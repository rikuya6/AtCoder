#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string s;

int solve() {
  int zero = count(s.begin(), s.end(), '0');
  int one = (int) s.size() - zero;
  return one + zero - abs(zero - one);
}

int main() {
  cin >> s;
  cout << solve() << endl;
}
