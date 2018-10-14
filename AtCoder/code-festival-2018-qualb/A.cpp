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
  int cnt{};
  for (int i = n; i <= 100; i += n) {
    ++cnt;
  }
  cout << 100 - cnt << endl;
}
