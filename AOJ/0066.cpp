#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

bool check(string& s, char c)
{
  REP(i, 3) {
    if (s[3 * i] == c && s[3 * i + 1] == c && s[3 * i + 2] == c) return true;
    if (s[0 + i] == c && s[3 + i] == c && s[6 + i] == c) return true;
  }
  if (s[0] == c && s[4] == c && s[8] == c) return true;
  if (s[2] == c && s[4] == c && s[6] == c) return true;
  return false;
}

int main()
{
  string s;
  while (cin >> s) {
    if (check(s, 'o')) cout << "o" << endl;
    else if (check(s, 'x')) cout << "x" << endl;
    else cout << "d" << endl;
  }
  return 0;
}
