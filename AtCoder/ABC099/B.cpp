#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

void make_table(vector<int>& t) {
  for (auto i = 1; i <= 1000; ++i) {
    t[i] += t[i - 1] + i;
  }
  // for (auto e : t) {
  //   cout << e << " ";
  // }
  // cout << endl;
}

int main() {
  vector<int> t(1001);
  make_table(t);
  int a, b;
  cin >> a >> b;
  cout << t[b - a] - b << endl;
}
