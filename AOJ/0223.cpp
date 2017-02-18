#include <iostream>
#include <queue>
#include <string>

using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)

struct P{
  int ty, tx, ky, kx, cnt;
};

int solve(int w, int h, int ty, int tx, int ky, int kx, bool closed[][52][52][52], int map[][52]){
  int dy[] = {1,-1, 0, 0}, dx[] = {0, 0, 1, -1};
  deque<P> open;
  P start_p = { ty, tx, ky, kx, 0 };
  open.push_back(start_p);
  closed[ty][tx][ky][kx] = true;

  while(! open.empty()){
    const P state = open.front();
    open.pop_front();

    // cout << "cnt: " << state.cnt << endl;
    if(state.cnt >= 100) return -1;
    if(state.ty == state.ky && state.tx == state.kx) return state.cnt;

    // cout << "size: " << open.size() << endl;

    // 次の状態
    P nstate;
    REP(i, 4){
      nstate.ty = state.ty + dy[i]; nstate.tx = state.tx + dx[i];
      nstate.ky = state.ky - dy[i]; nstate.kx = state.kx - dx[i];
      nstate.cnt = state.cnt + 1;
      if(map[nstate.ty][nstate.tx] == 0 && map[nstate.ky][nstate.kx] == 0 && ! closed[nstate.ty][nstate.tx][nstate.ky][nstate.kx]){
        closed[nstate.ty][nstate.tx][nstate.ky][nstate.kx] = true;
        open.push_back(nstate);
      }else if(map[nstate.ty][nstate.tx] == 1 && map[nstate.ky][nstate.kx] == 0){
        if(! closed[state.ty][state.tx][nstate.ky][nstate.kx]){
          closed[state.ty][state.tx][nstate.ky][nstate.kx] = true;
          nstate.ty = state.ty; nstate.tx = state.tx;
          open.push_back(nstate);
        }
      }else if(map[nstate.ty][nstate.tx] == 0 && map[nstate.ky][nstate.kx] == 1){
        if(! closed[nstate.ty][nstate.tx][state.ky][state.kx]){
          closed[nstate.ty][nstate.tx][state.ky][state.kx] = true;
          nstate.ky = state.ky; nstate.kx = state.kx;
          open.push_back(nstate);
        }
      }
    }
  }
  return -2;
}

int main()
{
  int w, h, tx, ty, kx, ky, ans;
  while((cin >> w >> h) && w && h){
    cin >> tx >> ty >> kx >> ky;
    bool closed[52][52][52][52];
    int map[52][52];
    REP(i, 52)
      REP(k, 52)
        map[i][k] = 1;
    REP(i, h)
      REP(k, w)
        cin >> map[i + 1][k + 1];
    // REP(i, h + 2){
    //   REP(k, w + 2)
    //     cout << map[i][k];
    //   cout << endl;
    // }
    ans = solve(w, h, ty, tx, ky, kx, closed, map);
    if(ans >= 0)
      cout << ans << '\n';
    else
      cout << "NA\n";
  }
  return 0;
}
