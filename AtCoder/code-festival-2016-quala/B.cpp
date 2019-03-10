#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, n) {
    cin >> a[i];
    --a[i];
  }
  int cnt{};
  REP(i, n) {
    if (a[a[i]] == i)
      ++cnt;
  }
  cout << cnt / 2 << endl;
}
