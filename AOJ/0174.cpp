#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  string s;
  while (cin >> s) {
    if (s == "0") break;
    int a_cnt = 0, b_cnt = 0;
    for (auto i = 1; i < s.size(); i++) {
      if (s[i] == 'A') a_cnt++;
      else b_cnt++;
    }
    if (a_cnt > b_cnt) a_cnt++;
    else b_cnt++;
    cout << a_cnt << " " << b_cnt << endl;
  }
  return 0;
}
