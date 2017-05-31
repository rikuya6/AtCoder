#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  REP(i, 3) {
    cin >> s;
    cout << s[0];
  }
  cout << endl;
}
