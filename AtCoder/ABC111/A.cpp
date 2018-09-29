#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  string n;
  cin >> n;
  for (auto e : n) {
    if (e == '1')
      cout << 9;
    else
      cout << 1;
  }
  cout << endl;
}
