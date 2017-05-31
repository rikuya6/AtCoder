#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int h, w;
  string s;
  cin >> h >> w;
  REP(i, h) {
    cin >> s;
    cout << s << endl;
    cout << s << endl;
  }
}
