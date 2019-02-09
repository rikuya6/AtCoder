#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n, k;
  cin >> n >> k;
  int sum = 1;
  REP(i, k - 1) {
    sum += 2;
  }
  // cout << sum << endl;
  if (n >= sum) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
