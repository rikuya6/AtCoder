#include <iostream>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int d;
  cin >> d;
  REP(i, d) {
    int s;
    cin >> s;
    cout << "Case " << i + 1 << ":" << endl;
    REP(k, 10) {
      s = (s * s / 100) % 10000;
      cout << s << endl;
    }
  }
  return 0;
}
