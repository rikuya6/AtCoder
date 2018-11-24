#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  vector<double> a(n);
  vector<pair<double, int>> d(n);
  double sum{};
  double avg{};
  REP(i, n) {
    int in;
    cin >> in;
    a[i] = in;
    sum += in;
  }
  avg = sum / n;
  // cout << avg << endl;
  REP(i, n) {
    d[i] = make_pair(a[i] - avg, i);
    if (d[i].first < 0)
      d[i].first *= -1;
    // cout << d[i].first << endl;
  }
  sort(d.begin(), d.end());
  cout << d[0].second << endl;
}
