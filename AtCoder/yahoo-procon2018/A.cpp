#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

bool check(string s)
{
  if (s[0] != 'y' || s[1] != 'a' || s[2] != 'h')
    return false;
  if (s[3] != s[4])
    return false;
  return true;
}

int main()
{
  string s;
  cin >> s;
  if (check(s))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
