#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int x, a, b;
  cin >> x >> a >> b;
  x -= a;
  int c = x / b;
  int ans = x - (b * c);
  cout << ans << endl;
}
