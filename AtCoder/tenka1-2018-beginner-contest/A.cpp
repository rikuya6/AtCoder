#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  string s;
  cin >> s;
  if (s.size() == 2)
    cout << s << endl;
  else {
    reverse(s.begin(), s.end());
    cout << s << endl;
  }
}
