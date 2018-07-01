#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  vector<pair<int, int>> a;
  cin >> n;
  REP(i, n) {
    int in_a;
    cin >> in_a;
    a.push_back(make_pair(in_a, i + 1));
  }
  sort(a.begin(), a.end(), greater<pair<int, int>>());
  for (auto e : a) {
    cout << e.second << endl;
  }
}
