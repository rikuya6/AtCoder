#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(int n, int k, vector<int>& h) {
  sort(h.begin(), h.end(), greater<int>());
  int min_v = INT_MAX;
  k--;
  for (int i = 0; i < n - k; ++i) {
    min_v = min(min_v, h[i] - h[i + k]);
    // cout << h[i] << endl << h[i + k] << endl;
  }
  return min_v;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  REP(i, n) cin >> h[i];
  cout << solve(n, k, h) << endl;
}
