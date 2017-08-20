#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int start = max(a, c), end = min(b, d);
  if (end - start > 0) cout << end - start << endl;
  else cout << 0 << endl;
  return 0;
}
