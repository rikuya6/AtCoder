#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int w, a, b, work, ans;
  cin >> w >> a >> b;
  if(a < b) {
    work = a + w;
    ans = b - work;
  }else{
    work = b + w;
    ans = a - work;
  }
  if(ans > 0) cout << ans << endl;
  else cout << 0 << endl;
}
