#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int solve(int n) {
  vector<int> a, b;
  a.push_back(1);
  b.push_back(1);
  for (auto i = 6; i <= 100000; i *= 6)
    a.push_back(i);
  for (auto i = 9; i <= 100000; i *= 9)
    b.push_back(i);
  int cnt {};
  while (n) {
    auto a_itr = upper_bound(a.begin(), a.end(), n);
    auto b_itr = upper_bound(b.begin(), b.end(), n);
    // cout << *(b_itr - 1) << endl;
    // cout << *(a_itr - 1) << endl;
    // if (n == 1) {
    //   cout << *(b_itr) << endl;
    //   cout << *(a_itr) << endl;
    //   // return -1;
    // }
    if (*(a_itr - 1) <= *(b_itr - 1)) {
      n -= *(b_itr - 1);
    } else {//if (*(a_itr - 1) > *(b_itr - 1)) {
      n -= *(a_itr - 1);
    } //else {
      // --n;
    // }
    // cout << n << endl;
    ++cnt;
  }

  return cnt;
}

int main() {
  int n;
  cin >> n;
  cout << solve(n) << endl;
}
