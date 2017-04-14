#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define INF 1 << 29

struct P{
  int ty, tx, find_cnt, distance;
};

int W, H, sx, sy, dirty_tile_cnt, short_distance;

void solve(bool closed[][22], char map[][22])
{
  int dy[] = {1,-1, 0, 0}, dx[] = {0, 0, 1, -1};
  deque<P> open;
  P start_p = { sx, sy, 0, 0};
  open.push_back(start_p);
  closed[sy][sx] = true;

  while(! open.empty()) {
    const P state = open.front();
    open.pop_front();

    if(state.find_cnt == dirty_tile_cnt) {
      short_distance = min(short_distance, state.distance);
      return;
    }
    P nstate;
    REP(i, 4) {
      nstate.ty = state.ty + dy[i];
      nstate.tx = state.tx + dx[i];
      nstate.distance++;
      if(nstate.ty >= 1 && nstate.ty <= H && nstate.tx >= 1 && nstate.tx <= W && map[nstate.ty][nstate.tx] != 'x') {
        if(map[nstate.ty][nstate.tx] == '*') {
          map[nstate.ty][nstate.tx] = '.';
          nstate.find_cnt++;
        }
        open.push_back(nstate);
      }
    }
  }
}

int main()
{
  while(cin >> W >> H, W) {
    bool closed[22][22];
    char map[22][22];
    dirty_tile_cnt = 0;
    short_distance = INF;
    REP(i, H) {
      REP(k, W) {
        char tile;
        cin >> tile;
        map[i + 1][k + 1] = tile;
        if(tile == '*') dirty_tile_cnt++;
        if(tile == 'o') {
          sx = k;
          sy = i;
          map[sx][sy] = '.';
        }
      }
    }
    solve(closed, map);
    cout << short_distance << endl;
    return 0;
  }
}
