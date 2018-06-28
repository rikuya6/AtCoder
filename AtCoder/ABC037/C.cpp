#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

vector<long long> make_table(const vector<long long>& a) {
  vector<long long> ret{0};
  for (size_t i = 1; i <= a.size(); ++i) {
    ret.push_back(ret[i - 1] + a[i - 1]);
  }
  return ret;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<long long> a(n);
  REP(i, n)
    cin >> a[i];
  vector<long long> t = make_table(a);
  long long ans{};
  for (int i = k; i <= n; ++i)
    ans += t[i] - t[i - k];
  cout << ans << endl;
}
