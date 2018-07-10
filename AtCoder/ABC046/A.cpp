#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if(a == b && a == c) cout << 1 << endl;
  else if((a == b || b == c || a==c) || (b == c && a != b)) cout << 2 << endl;
  else cout << 3 << endl;
}
