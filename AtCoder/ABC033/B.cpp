#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string solve(vector<pair<int, string>>& st, const int sum) {
  sort(st.begin(), st.end(), greater<pair<int, string>>());
  if (st[0].first > sum / 2) return st[0].second;
  return "atcoder";
}

int main() {
  int n, sum{};
  vector<pair<int, string>> sp;
  cin >> n;
  REP(i, n) {
    string s;
    int p;
    cin >> s >> p;
    sp.emplace_back(p, s);
    sum += p;
  }
  cout << solve(sp, sum) << endl;
}
