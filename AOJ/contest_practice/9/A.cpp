// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1192&lang=jp

#include <iostream>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int x, y, s;
  while(cin >> x >> y >> s, x && y && s) {
    int ans = -1;
    for(int p1 = 1; p1 < s; p1++) {
      for(int p2 = 1; p2 < s; p2++) {
        if(p1 * (100 + x) / 100 + p2 * (100 + x) / 100 == s) {
          ans = max(ans, p1 * (100 + y) / 100 + p2 * (100 + y) / 100);
        }
      }
    }
    cout << ans << endl;
  }
}
