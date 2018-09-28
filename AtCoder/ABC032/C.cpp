#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

long long solve(vector<int> s, int k) {
  long long ans{}, sum = 1;
  for (long long left = 0, right = 0; left < s.size(); ++left) {
    while (left <= right && right < s.size()) {
      // cout << left << " " << right << endl;
      if (sum * s[right] <= k) {
        sum *= s[right];
        ans = max(ans, right - left + 1);
        ++right;
      } else {
        // cout << right - left + 1 << endl;
        // cout << "break" << endl;
        sum /= s[left];
        break;
      }
    }
  }
  return ans;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> s(n);
  REP(i, n) {
    cin >> s[i];
    if (s[i] == 0) {
      cout << n << endl;
      return 0;
    }
  }
  cout << solve(s, k) << endl;
}
