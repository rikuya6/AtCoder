#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

using ll = long long;

int n, m;
vector<pair<ll, ll>> ab;

ll solve() {
  sort(ab.begin(), ab.end());
  ll h{}, ans{};
  REP(i, n) {
    ll a, b;
    tie(a, b) = ab[i];
    if (m - h <= b) {
      ans += (m - h) * a;
      h += m - h;
    } else {
      ans += a * b;
      h += b;
    }
    if (h == m) {
      // cout << "abc" << endl;
      break;
    }
  }
  return ans;
}

int main() {
  cin >> n >> m;
  REP(i, n) {
    int in_a, in_b;
    cin >> in_a >> in_b;
    ab.emplace_back(in_a, in_b);
  }
  cout << solve() << endl;
}
