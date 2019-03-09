#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n, m, c;
vector<int> b;

int solve() {
  int ans{};
  REP(i, n) {
    int sum{};
    REP(i, m) {
      int a;
      cin >> a;
      sum += a * b[i];
    }
    if (sum + c > 0)
      ++ans;
  }
  return ans;
}

int main() {
  cin >> n >> m >> c;
  REP(i, m) {
    int in;
    cin >> in;
    b.push_back(in);
  }
  cout << solve() << endl;
}
