#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool solve(vector<pair<int, int>>& ab) {
  vector<int> cnt(4, 0);
  REP(i, 3) {
    int a, b;
    tie(a, b) = ab[i];
    ++cnt[a];
    ++cnt[b];
  }
  int one_cnt = count_if(cnt.begin(), cnt.end(), [](int x) { return x == 1; });
  int two_cnt = count_if(cnt.begin(), cnt.end(), [](int x) { return x == 2; });
  if (one_cnt == 2 && two_cnt == 2)
    return true;
  return false;
}

int main() {
  vector<pair<int, int>> ab;

  REP(i, 3) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    ab.emplace_back(a, b);
  }
  if (solve(ab))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
