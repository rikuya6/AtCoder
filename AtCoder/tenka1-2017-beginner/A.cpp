#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <bitset>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  string s;
  cin >> s;
  bitset<6> bs(s);
  cout << bs.count() << endl;
}
