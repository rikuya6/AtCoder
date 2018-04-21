#include <iostream>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
  string s;
  cin >> s;
  int sum = 700;
  for (auto e : s) {
    if (e == 'o') sum += 100;
  }
  cout << sum << endl;
}
