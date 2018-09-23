#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool solve(string& s, string& t) {
  map<char, char> mp1, mp2;
  for (int i = 0; i < s.size(); ++i) {
    if (mp1.find(t[i]) == mp1.end()) {
      mp1[t[i]] = s[i];
    } else {
      if (mp1[t[i]] != s[i]) return false;
    }
    if (mp2.find(s[i]) == mp2.end()) {
      mp2[s[i]] = t[i];
    } else {
      if (mp2[s[i]] != t[i]) return false;
    }
  }
  return true;
}

int main() {
  string s, t;
  cin >> s >> t;
  if (solve(s, t)) cout << "Yes" << endl;
  else cout << "No" << endl;
}
