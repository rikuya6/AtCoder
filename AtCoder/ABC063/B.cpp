#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    for (int k = i + 1; k < s.length(); k++) {
      cout << s[i] << " " << s[k] <<  endl;
      if (s[i] == s[k]) {
        cout << "no" << endl;
        return 0;
      }
    }
  }
  cout << "yes" << endl;
  return 0;
}
