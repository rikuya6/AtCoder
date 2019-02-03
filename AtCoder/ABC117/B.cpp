#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

string solve(int n, vector<int>& l) {
  sort(l.begin(), l.end());
  int sum = accumulate(l.begin(), l.end(), 0) - l.back();
  if (l.back() < sum)
    return "Yes";
  return "No";
}

int main() {
  int n;
  cin >> n;
  vector<int> l(n);
  REP(i, n) cin >> l[i];
  cout << solve(n, l) << endl;
}
