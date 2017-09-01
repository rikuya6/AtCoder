#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  string str;
  cin >> str;
  reverse(str.begin(), str.end());
  cout << str << endl;
  return 0;
}
