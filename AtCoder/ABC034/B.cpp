#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  if (n % 2 == 0)
    cout << n - 1 << endl;
  else
    cout << n + 1 << endl;
}
