#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string solve(int T, vector<pair<int, int>>& ct) {
  sort(ct.begin(), ct.end());
  for (auto p : ct) {
    if (p.second <= T) {
      return to_string(p.first);
    }
  }
  return "TLE";
}

int main() {
  int N, T;
  cin >> N >> T;
  vector<pair<int, int>> ct(N);
  REP(i, N) {
    int c, t;
    cin >> c >> t;
    ct[i] = make_pair(c, t);
  }
  cout << solve(T, ct) << endl;
}
