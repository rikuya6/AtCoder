#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool solve(int n) {
  set<string> ss;
  string old, current;
  cin >> old;
  ss.insert(old);
  while (n--) {
    cin >> current;
    if (old.back() != current.front())
      return false;
    if (ss.find(current) != ss.end())
      return false;
    ss.insert(current);
    old = current;
    // cout << old << endl;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  if (solve(n - 1))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
