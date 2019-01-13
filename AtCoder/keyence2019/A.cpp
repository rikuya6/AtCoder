#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  vector<int> n(4);
  REP(i, 4) cin >> n[i];
  sort(n.begin(), n.end());
  int t[4] = {1, 4, 7, 9};
  bool check = true;
  REP(i, 4) {
    if (n[i] != t[i])
      check = false;
  }
  if (check)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
