#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

void encode(string& s) {
  REP (i, s.size()) {
    if (!isalpha(s[i])) continue;
    if ((s[i] - 1) == 'a' - 1) s[i] = 'z';
    else s[i] = s[i] - 1;
  }
}

int main()
{
  string s;
  while(getline(cin, s)) {
    while (true) {
      encode(s);
      if (s.find("the") != string::npos || s.find("this") != string::npos || s.find("that") != string::npos) {
        cout << s << endl;
        break;
      }
    }
  }
  return 0;
}
