#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;
  cout << s[0] << s.substr(1, s.length() - 2).length() << s[s.length() - 1] << endl;
  return 0;
}
