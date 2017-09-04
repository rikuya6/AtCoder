#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;
  for (int i = 1; i <= s.size(); i++) {
    if (i % 2 != 0) {
      cout << s[i - 1];
    }
  }
  cout << endl;
  return 0;
}
