#include <algorithm>
#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  if (n <= 999)
    cout << "ABC" << endl;
  else
    cout << "ABD" << endl;
}
