#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  string s;
  getline(cin, s);
  for (int i = 0; i < s.size(); ++i) {
    s[i] = toupper(s[i]);
    cout << s[i];
  }
  cout << endl;
  return 0;
}
