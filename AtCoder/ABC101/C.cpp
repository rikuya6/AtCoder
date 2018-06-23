#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(vector<int>& a, const int k) {
  int size = a.size();
  int cnt{};
  if (size == k) return 1;
  while (size >= 1) {
    size = size - k + 1;
    ++cnt;
  }
  return cnt;
}

int main() {
  int n, k;
  vector<int> a;
  cin >> n >> k;
  REP(i, n) {
    int ai;
    cin >> ai;
    a.push_back(ai);
  }
  cout << solve(a, k) << endl;
}
