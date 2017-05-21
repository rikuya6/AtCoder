#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

bool isok(ll num, ll s, ll c) {
  if(s < num) {
    ll rem = num - s;
    c -= 2LL * rem;
  }
  return c >= num * 2LL;
}

ll f(ll N, ll M) {
  ll left = 0, right = N + M * 2LL;
  while(left + 1 < right) {
    ll mid = (left + right) / 2LL;
    if(isok(mid, N, M)) {
      left = mid;
    } else {
      right = mid;
    }
    // cout << left << " " << right << endl;
  }
  return left;
}
int main() {
  ll N, M;
  cin >> N >> M;
  ll ans = f(N, M);
  cout << ans << endl;
  return 0;
}
