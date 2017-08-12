// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2253

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int map[1000][1000];
int dx[6] = { 1, 0, -1, -1, 0, 1};
int dy[6] = { 0, -1, -1, 0, 1, 1};
int offset = 500;
int t, n;
int sx, sy;
int cnt;

void dfs()
{
  queue<pair<int, int>> que; // y, x
  que.push(make_pair(sy, sx));
  while(!que.empty()) {
    pair<int, int> st = que.front(); que.pop();
    const int sx = st.second, sy = st.first;
    if(map[sy][sx] == t) continue;
    REP(i, 6) {
      int nx = sx + dx[i], ny = sy + dy[i];
      if(map[ny][nx] == -1) {
        cnt++;
        map[ny][nx] = map[sy][sx] + 1;
        que.push(make_pair(ny, nx));
      }
    }
  }
}

int main()
{
  while(cin >> t >> n, t || n){
    cnt = 1; // スタートを含む
    REP(i, 1000){
      REP(k, 1000){
        map[i][k] = -1;
      }
    }
    int x, y;
    REP(i, n){
      cin >> x >> y;
      y += offset;
      x += offset;
      map[y][x] = 0;
    }
    cin >> sx >> sy;
    sx += offset, sy += offset;
    map[sy][sx] = 0;
    dfs();
    cout << cnt << endl;
  }
}
