#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;
  auto it = find(s.begin(), s.end(), '9');
  if (it != s.end()) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
