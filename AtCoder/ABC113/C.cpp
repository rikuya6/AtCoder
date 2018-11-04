#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <ios>
#include <iomanip>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

void solve(int n, int m, vector<pair<long long, long long>>& v, map<long long, vector<long long>>& py) {
  REP(i, m) {
    int p = v[i].first;
    int y = v[i].second;
    int k = 1;
    for (auto& e : py[p]) {
      if (e == y) break;
      ++k;
    }
    // cout << p  << k << endl;
    cout << setfill('0') << right << setw(6) << p;
    cout << setfill('0') << right << setw(6) << k;
    cout << endl;
  }
}

int main() {
  int n, m;
  vector<pair<long long, long long>> v;
  map<long long, vector<long long>> py;
  cin >> n >> m;
  REP(i, m) {
    int p, y;
    cin >> p >> y;
    v.emplace_back(p, y);
    py[p].push_back(y);
  }
  REP(i, n) {
    sort(py[i].begin(), py[i].end());
  }
  solve(n, m, v, py);
}
