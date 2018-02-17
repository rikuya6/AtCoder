#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  int cnt = 0;
  cin >> s;
  REP(i, 3) {
    if (s[i] == '1')
      cnt++;
  }
  cout << cnt << endl;
}
