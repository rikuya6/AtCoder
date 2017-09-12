#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

bool check(const string s)
{
  string r = s;
  reverse(r.begin(), r.end());
  return s == r;
}

int main()
{
  string str;
  int cnt = 0;
  while (cin >> str) {
    if (check(str)) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}
