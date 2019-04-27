#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n;
vector<int> v, c;

int solve() {
  int sum{};
  REP(i, n) {
    if (v[i] - c[i] > 0)
      sum += v[i] - c[i];
  }
  return sum;
}

int main() {
  cin >> n;
  REP(i, n) {
    int a;
    cin >> a;
    v.push_back(a);
  }
  REP(i, n) {
    int a;
    cin >> a;
    c.push_back(a);
  }
  cout << solve() << endl;
}
