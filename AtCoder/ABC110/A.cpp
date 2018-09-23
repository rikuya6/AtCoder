#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  vector<int> a(3);
  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end(), greater<int>());
  int sum = 1;
  sum = 10 * a[0];
  sum += a[1];
  sum += a[2];
  cout << sum << endl;
}
