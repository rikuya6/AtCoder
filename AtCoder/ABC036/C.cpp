#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

void solve(const vector<int>& a) {
  map<int, int> mp;
  for (auto e : a) {
    mp.insert(make_pair(e, 0));
  }
  int i{};
  for (auto& e : mp) {
    e.second = i++;
  }
  for (auto e : a) {
    cout << mp[e] << endl;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, n)
    cin >> a[i];
  solve(a);
}
