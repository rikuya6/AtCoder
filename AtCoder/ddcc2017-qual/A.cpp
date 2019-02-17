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
  if (s[0] == s[1] && s[1] != s[2] && s[2] == s[3])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
