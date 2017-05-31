#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;
  REP(i, s.length()) {
    if(s[i] == ',')
      s[i] = ' ';
  }
  cout << s << endl;
}
