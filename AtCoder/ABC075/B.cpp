// 未完成

#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int H, W;
int dx[] = {1,  1 -1  -1, 0, 1, -1, 0};
int dy[] = {1, -1, 1, -1, 1, 0,  0, -1};
char s[50][50];
int ret[50][50];

void solve()
{
  FOR (i, 0, H) {
    FOR (k, 0, W) {
      if (s[i][k] == '#')
        continue;
      REP(m, 8) {
        if (i + m < 0 || k + m < 0 || i + m >= H || k + m >= W)
          continue;
        if (s[i + dy[m]][k + dx[m]] != '.' || s[i + dy[m]][k + dx[m]] != '#')
          cout << s[i + dy[m]][k + dx[m]];
        if (s[i + dy[m]][k + dx[m]] == '#') {
          ret[i][k]++;
        }
      }
    }
    cout << endl;
  }
  FOR (i, 0, H) {
    FOR (k, 0, W) {
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
  fill(s[0], s[50], '.');
  FOR (i, 0, H)
    FOR (k, 0, W)
      cin >> s[i][k];
  solve();
}
