#include <iostream>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  string s;
  cin >> s;
  if (*(s.end() - 1)  == 'T')
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
