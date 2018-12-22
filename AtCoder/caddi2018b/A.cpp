#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  string n;
  cin >> n;
  int cnt{};
  REP(i, n.size()) {
    if (n[i] == '2')
      cnt++;
  }
  cout << cnt << endl;
}
