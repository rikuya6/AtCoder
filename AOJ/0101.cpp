#include <iostream>
#include <string>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  string s;
  cin >> n;
  getline(cin, s);
  REP(i, n) {
    getline(cin, s);
    REP(k, s.size()) {
      if (s.substr(k, 7) == "Hoshino") s[k + 6] = 'a';
    }
    cout << s << endl;
  }
  return 0;
}
