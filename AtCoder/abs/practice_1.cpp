#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, c;
  string s;
  cin >> a >> b >> c >> s;
  cout << a + b + c << " " << s << endl;
}
