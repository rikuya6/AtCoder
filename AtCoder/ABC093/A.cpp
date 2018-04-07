#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  cout << (s == "abc" ? "Yes" : "No") << endl;
}
