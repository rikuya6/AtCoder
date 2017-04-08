// 2014
#include <iostream>
#include <queue>
#include <climits>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

char tb[51][51];
bool flag[51][51];
int ans_table[51][51];
int W, H;
const int dh[] = {1, -1, 0, 0};
const int dw[] = {0, 0, 1, -1};

int dfs(const int h, const int w)
{
  if(tb[h][w] == 'B') return 1;
  if(tb[h][w] == 'W') return 2;

  int back = 0;
  REP(d, 4){
    // 移動先生成
    int nh = h + dh[d];
    int nw = w + dw[d];
    // 境界値チェック
    if(nh >= 0 && nh < H && nw >= 0 && nw < W && !flag[nh][nw]) {
      flag[nh][nw] = true;
      back |= dfs(nh, nw);
    }
  }
  return back;
}

int main()
{
  while(cin >> W >> H, W) {
    REP(i, 51) {
      REP(k, 51) {
        flag[i][k] = false;
        tb[i][k] = 0;
        ans_table[i][k] = 0;
      }
    }
    REP(i, H)
      REP(k, W)
        cin >> tb[i][k];
    for(int h = 0; h < H; h++) {
      for(int w = 0; w < W; w++) {
        if(tb[h][w] == 'B' || tb[h][w] == 'W' || ans_table[h][w]) continue;
        REP(a, 51)
          REP(b, 51)
            flag[a][b] = false;
        flag[h][w] = true;
        int check = dfs(h, w);
        REP(l, H)
          REP(m, W)
            if(flag[l][m] && tb[l][m] == '.') ans_table[l][m] = check;
      }
    }
    int brack_cnt = 0, white_cnt = 0;
    // REP(i, H){
    //   REP(k, W){
    //     cout << ans_table[i][k];
    //   }
    //   cout << endl;
    // }
    REP(i, H)
      REP(k, W) {
        if(ans_table[i][k] == 1) brack_cnt++;
        else if(ans_table[i][k] == 2) white_cnt++;
      }
    cout << brack_cnt << " " << white_cnt << endl;
  }
  return 0;
}
