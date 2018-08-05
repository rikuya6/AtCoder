#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool check_upper(char c) {
  return c >= 'A' && c <= 'Z';
}

bool solve(const string s) {
  if (s.front() != 'A') return false; // 1番目の条件
  int upper_cnt{};
  for (char c : s) {
    if (check_upper(c)) ++upper_cnt;
  }
  if (upper_cnt != 2) return false; // 3番目の条件
  string mid = s.substr(2, s.size() - 3);
  // cout << mid << endl;
  int c_cnt{};
  for (char c : mid) {
    if (c == 'C') ++c_cnt;
  }
  if (c_cnt != 1) return false; // 2番目の条件
  return true;
}

int main() {
  string s;
  cin >> s;
  if (solve(s)) {
    cout << "AC" << endl;
  } else {
    cout << "WA" << endl;
  }
}
