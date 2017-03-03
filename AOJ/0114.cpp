// TLEのコード
// * 正しい解法
//   modを取って1になるタイミングが一緒になるポイントを見つければいい
//   例えば、xが3回, yが2回, zが5回で1になるとする。ということは、3, 2, 5の最小公倍数を取ればOK。最小公倍数が最小移動回数
#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int a[3], m[3];

int solve(int x, int y, int z)
{
  int cnt = 0;
  while(true) {
    cnt++;
    x = x * a[0] % m[0];
    y = y * a[1] % m[1];
    z = z * a[2] % m[2];
    // cout << nx << " " << ny << " " << nz << endl;
    if(x == 1 && y == 1 && z == 1)
      break;
  }
  return cnt;
}

int main()
{
  while(true) {
    REP(i, 3)
      cin >> a[i] >> m[i];
    if(!a[0] && !a[1] && !a[2] && !m[0] && !m[1] && !m[2])
      break;
    cout << solve(1, 1, 1) << endl;
  }
  return 0;
}
