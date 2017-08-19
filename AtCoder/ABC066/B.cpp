#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;
  while (true) {
    s.erase(s.end() - 1);
    int len = s.length();
    if (len % 2 != 0) continue;
    // cout << s.substr(0, len / 2) << " " << s.substr(len / 2) << endl;
    if (s.substr(0, len / 2) == s.substr(len / 2)) {
      cout << len << endl;
      break;
    }
  }
  return 0;
}
