#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int k, t;
  cin >> k >> t;
  int max_v{};
  REP(i, t) {
    int a;
    cin >> a;
    max_v = max(max_v, a);
  }
  cout << max(max_v - 1 - (k - max_v), 0) << endl;
}
