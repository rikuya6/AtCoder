#include <iostream>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int H, W;
// 右, 左, 上, 下　右上, 左上, 右下, 左下
int dx[] = {1, -1,  0,  0, 1, -1, 1, -1};
int dy[] = {0,  0, -1,  1, 1,  1, -1, -1};
string s[50];
int ret[50][50];

void solve()
{
  REP (i, H) {
    REP(k, W) {
      if (s[i][k] == '#')
        continue;
      REP(m, 8) {
        if (i + dy[m] < 0 || k + dx[m] < 0 || i + dy[m] >= H || k + dx[m] >= W)
          continue;
        if (s[i + dy[m]][k + dx[m]] == '#') {
          ret[i][k]++;
        }
      }
    }
  }
  REP (i, H) {
    REP (k, W) {
      if (s[i][k] == '#')
        cout << "#";
      else
        cout << ret[i][k];
    }
    cout << endl;
  }
}

int main()
{
  cin >> H >> W;
  REP (i, H)
    cin >> s[i];
  solve();
}
