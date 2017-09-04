#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int x, t;
  cin >> x >> t;
  if (x < t) cout << 0 << endl;
  else cout << x - t << endl;
  return 0;
}
