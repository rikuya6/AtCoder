#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int N, H, W;

int solve(vector<pair<int, int>>& ab) {
  int ret{};
  REP(i, N) {
    if (ab[i].first >= H && ab[i].second >= W)
      ++ret;
  }
  return ret;
}


int main() {
  cin >> N >> H >> W;
  vector<pair<int, int>> ab(N);
  REP(i, N) {
    int a, b;
    cin >> a >> b;
    ab[i] = make_pair(a, b);
  }
  cout << solve(ab) << endl;
}
