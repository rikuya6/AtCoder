#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

string decode(const string s)
{
  string d;
  int size = s.size();
  for (int i = 0; i < size; ++i) {
    if (s[i] == '@') {
      int cnt = s[i + 1] - 48;
      for (int k = cnt; k > 0; --k) {
        d += s[i + 2];
      }
      i += 2;
    }else{
      d += s[i];
    }
  }
  return d;
}

int main()
{
  string s;
  while (cin >> s) {
    cout << decode(s) << endl;
  }
  return 0;
}
