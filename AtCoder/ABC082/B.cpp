#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string s, t;
  cin >> s >> t;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end(), greater<char>());
  if (s < t)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
