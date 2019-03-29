#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, n;
  string x;
  cin >> a >> b >> n >> x;
  for (auto c : x) {
    if (c == 'S' && a > 0) {
      --a;
    } else if (c == 'C' && b > 0) {
      --b;
    } else if (c == 'E'){
      if (a == 0 && b == 0)
        continue;
      if (a == b) {
        --a;
      } else if (a > b) {
        --a;
      } else {
        --b;
      }
    }
  }
  cout << a << '\n' << b << endl;
}
