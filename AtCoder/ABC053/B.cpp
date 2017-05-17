#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;
  int apos = 0, zpos = 0;
  REP(i, s.length()) {
    if(s[i] == 'A') {
      apos = i + 1;
      break;
    }
  }
  for(int i = s.length(); i > 0; i--) {
    if(s[i] == 'Z') {
      zpos = i + 1;
      break;
    }
  }
  cout << zpos - apos + 1 << endl;
}
