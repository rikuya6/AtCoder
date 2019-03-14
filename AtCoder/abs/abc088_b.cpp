#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int calc(int i, int sum) {
  if (i / 10 == 0 && i % 10 == 0) return sum;
  return calc(i / 10, sum + (i % 10));
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, n) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());
  int alice{}, bob{};
  REP(i, n) {
    if (i % 2 == 0)
      alice += a[i];
    else
      bob += a[i];
  }
  cout << alice - bob << endl;
}
