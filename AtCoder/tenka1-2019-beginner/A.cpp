#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b)
    swap(a, b);
  if (a <= c && c <= b)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
