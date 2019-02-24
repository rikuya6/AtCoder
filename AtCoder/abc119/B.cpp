#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

double solve(vector<pair<double, string>>& v) {
  double BTC = 380000.0;
  double sum{};
  for (auto e : v) {
    double x = e.first;
    string u = e.second;
    if (u == "BTC") {
      x *= BTC;
    }
    sum += x;
  }
  return sum;
}

int main() {
  int n;
  vector<pair<double, string>> v;
  cin >> n;
  REP(i, n) {
    double d;
    string s;
    cin >> d >> s;
    v.emplace_back(d, s);
  }
  cout << solve(v) << endl;
}
