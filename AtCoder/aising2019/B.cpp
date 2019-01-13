#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n, a, b;

int solve(vector<int>& p) {
  sort(p.begin(), p.end());
  int s[4] = {0, a + 1, b + 1, 100};
  vector<int> groups_cnt = {0, 0, 0};
  for (int i = 0; i < p.size(); ++i) {
    int target = p[i];
    for (int k = 0; k < 3; ++k) {
      if (target >= s[k] && target < s[k + 1])
        groups_cnt[k]++;
    }
  }
  return *min_element(groups_cnt.begin(), groups_cnt.end());
}

int main() {
  cin >> n >> a >> b;
  vector<int> p(n);
  REP(i, n) cin >> p[i];
  cout << solve(p) << endl;
}

