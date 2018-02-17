#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

bool solve(string s)
{
  if ((s[0] == s[1] && s[0] == s[2] && s[1] == s[2]) || (s[1] == s[2] && s[1] == s[3] && s[2] == s[3]))
    return true;
  else
    return false;
}

int main()
{
  string s;
  cin >> s;
  solve(s) ? cout << "Yes\n" : cout << "No\n";
}
