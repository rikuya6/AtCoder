#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(int n, vector<int>& p) {
  sort(p.begin(), p.end(), greater<int>());
  int sum = p.front() / 2;
  FOR(i, 1, n) {
    sum += p[i];
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  REP(i, n) cin >> p[i];
  cout << solve(n, p) << endl;
}
