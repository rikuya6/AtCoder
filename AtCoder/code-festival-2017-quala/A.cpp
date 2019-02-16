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
  if (s.substr(0, 4) == "YAKI")
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
