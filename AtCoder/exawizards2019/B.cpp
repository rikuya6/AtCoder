#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)


bool solve(int n, string s) {
  int red{}, blue{};
  for (auto c : s) {
    if (c == 'R')
      ++red;
    else
      ++blue;
  }
  return red <= blue ? false : true;
}

int main() {
  int n;
  string s;
  cin >> n >> s;
  if (solve(n, s))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
