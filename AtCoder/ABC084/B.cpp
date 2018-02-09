#include <iostream>
#include <string>
#include <cctype>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int a, b;
string s;

bool check()
{
  for(int i = 0; i < a; i++) {
    if (!isdigit(s[i]))
      return false;
  }
  if (s[a] != '-') return false;
  for(int i = a + 1; i <= a + b; i++) {
    if (!isdigit(s[i]))
      return false;
  }
  return true;
}

int main()
{
  cin >> a >> b >> s;
  if (check())
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
