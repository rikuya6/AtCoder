#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
 
using ll = long long;
 
ll get_num(vector<int>& number, int begin, int end) {
  ll ret = 0;
  for (int i = end, pos = 0; i >= begin; --i, ++pos) {
    ret += number[i] * pow(10, pos);
  }
  return ret;
}
 
ll sum(vector<int>& number, int i, size_t size) {
  size_t b = 0;
  size_t e = 0;
  ll sum = 0;
  for (size_t k = 0; k < size; ++k) {
    size_t f = (i >> k) & 1;
    if (f) {
      int a = get_num(number, b, e);
      // cout << a << endl;
      sum += a;
      ++e;
      b = e;
    } else {
      ++e;
    }
  }
  // cout << get_num(number, b, e) << endl;
  return sum + get_num(number, b, e);
}
 
ll solve(string s, vector<int>& number) {
  int n = int(pow(2, s.length() - 1));
  ll ret{};
  for (int i = 0; i < n; ++i) {
    ret += sum(number, i, s.length() - 1);
    // cout << endl;
  }
  return ret;
}
 
int main() {
  string s;
  cin >> s;
  vector<int> number;
  for (auto e : s) {
    number.push_back(e - '0');
  }
  cout << solve(s, number) << endl;
}
