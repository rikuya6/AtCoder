#include <iostream>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool solve (const int a, const string s) {
  int num = a;
  for (auto e : s) {
    if (num == 0) return true;
    if (e == '+') ++num;
    else --num;
  }
  if (num == 0) return true;
  else return false;
}

int main() {
  int a;
  string s;
  cin >> a >> s;
  if (solve(a, s)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
