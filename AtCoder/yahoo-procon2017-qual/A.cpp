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
  if (count(s.begin(), s.end(), 'y') == 1 &&
      count(s.begin(), s.end(), 'a') == 1 &&
      count(s.begin(), s.end(), 'h') == 1 &&
      count(s.begin(), s.end(), 'o') == 2
     )
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
