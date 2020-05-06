#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  vector<pair<string, pair<int, int>>> v(n);
  REP(i, n) {
    string s; int p;
    cin >> s >> p;
    v[i] = make_pair(s, make_pair(p * -1, i + 1));
  }
  sort(v.begin(), v.end());

  REP(i, n) {
    cout << v[i].second.second << endl;
  }
}
