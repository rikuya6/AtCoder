#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  bool cnt[255];
  cin >> s;
  fill(cnt, cnt + 255, false);
  for (int i = 0; i < s.length(); i++) {
    cnt[s[i]] = true;
  }
  for (char i = 'a'; i <= 'z'; i++) {
    if (!cnt[i]) {
      cout << i << endl;
      return 0;
    }
  }
  cout << "None" << endl;
  return 0;
}
