#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)

string solve(string& s) {
  reverse(s.begin(), s.end());
  const vector<string> t {"maerd", "remaerd", "esare", "resare"};
  int size{};
  for (int i = 0; i < s.size();) {
    bool check = false;
    for (auto e : t) {
      if (s.substr(i, e.size()) == e) {
        size += e.size();
        i += e.size();
        check = true;
      }
    }
    if (!check)
      break;
  }
  if (s.size() == size)
    return "YES";
  return "NO";
}

int main() {
  string s;
  cin >> s;
  cout << solve(s) << endl;
}
