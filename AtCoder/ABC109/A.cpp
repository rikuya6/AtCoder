#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b;
  cin >> a >> b;
  if ((a * b) % 2 == 0)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}
