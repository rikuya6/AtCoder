#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
  string s;
  REP(i, 3) {
    cin >> s;
    cout << s[i];
  }
  cout << endl;
}
