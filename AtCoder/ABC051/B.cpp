#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int k, s, ans = 0;
  cin >> k >> s;
  for(int x = 0; x <= k; x++) {
    for(int y = 0; y <= k; y++) {
      int z = s - x - y;
      // cout << z << endl;
      if(x + y + z == s && z >= 0 && z <= k) ans++;
    }
  }
  cout << ans << endl;
}
