#include <algorithm>
#include <iostream>
#include <map>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

char solve(map<char, string>& mp) {
  char target = 'a';
  while (!mp[target].empty()) {
    char next_target = *(mp[target].end() - 1);
    mp[target].pop_back();
    target = next_target;
  }
  return toupper(target);
}

int main() {
  map<char, string> mp;
  REP(i, 3) {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    mp.insert(make_pair('a' + i, s));
  }
  cout << solve(mp) << endl;
}
