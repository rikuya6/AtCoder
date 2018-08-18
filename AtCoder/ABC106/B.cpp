#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

constexpr int MAX = 201;
constexpr int MAX_sqrt = sqrt(MAX);
bool prime[202];
vector<int> prime_v;

vector<int> era() {
  for (int i = 0; i < MAX; i++) prime[i] = true;
  prime[0] = 0;
  prime[1] = 0;

  vector<int> ret;
  for (int i = 2; i < MAX_sqrt; i++) {
    if (prime[i] == 1) {
      ret.push_back(i);
      for (int j = 2; i * j <= MAX; j++) prime[i * j] = false;
    }
  }
  return ret;
}

bool solve(int n) {
  vector<int> p;
  map<int, int> mp;
  for (int i = 1; i < prime_v.size(); ++i) {
    // for (int k = 0; k < prime_v.size(); ++k) {
    if (n % prime_v[i] == 0) {
      p.push_back(prime_v[i]);
      ++mp[prime_v[i]];
      n /= prime_v[i];
      if (n == 1) break;
    }
    // }
  }
  int sum = 1;
  for (auto e : mp) {
    int v = e.second + 1;
    // cout << v << endl;
    sum *= v;
  }
  // cout << sum << endl;
  return (sum == 8) ? true : false;
}

int main() {
  prime_v = era();
  int n;
  cin >> n;
  int sum{};
  for (int i = 1; i <= n; i += 2) {
    if (solve(i)) ++sum;
  }
  cout << sum << endl;
}
