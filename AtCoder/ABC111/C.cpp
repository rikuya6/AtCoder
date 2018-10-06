#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

pair<int, int> get_mode_and_second(unordered_map<int, int>& v) {
  vector<pair<int, int>> a;
  for (auto e : v) {
    a.push_back(make_pair(e.second, e.first));
  }
  sort(a.begin(), a.end(), greater<pair<int, int>>());
  int first = a.front().second;
  int second;
  if (a.size() == 1)
    second = a.front().first;
  else
    second = a[1].second;
  return make_pair(first, second);
}

int solve(unordered_map<int, int>& e, int e_cnt, unordered_map<int, int>& o, int o_cnt) {
  auto e_p = get_mode_and_second(e);
  auto o_p = get_mode_and_second(o);
  if (e_p.first == o_p.first) {
    int p1 = e_cnt - e[e_p.first] + o_cnt - o[o_p.second];
    int p2 = e_cnt - e[e_p.second] + o_cnt - o[o_p.first];
    return min(p1, p2);
  }
  return e_cnt - e[e_p.first] + o_cnt - o[o_p.first];
}

int main() {
  int n, e_cnt{}, o_cnt{};
  unordered_map<int, int> e, o;
  cin >> n;
  REP(i, n) {
    int v;
    cin >> v;
    if (i % 2 == 0) {
      e[v]++;
      e_cnt++;
    }
    else {
      o[v]++;
      o_cnt++;
    }
  }
  cout << solve(e, e_cnt, o, o_cnt) << endl;
}
