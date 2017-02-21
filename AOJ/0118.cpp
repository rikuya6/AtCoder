#include <iostream>
#include <string>

using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)

void dfs(const int, const int, const char kind);

char section[101][101];
int H, W;

int main()
{
  while(cin >> H >> W, H && W){
    int ans = 0;
    REP(i, H)
      REP(k, W)
        cin >> section[i][k];
    for(int h = 0; h < H; h++)
      for(int w = 0; w < W; w++)
        if(section[h][w] != '0'){
          dfs(h, w, section[h][w]);
          ans++;
        }
    cout << ans << '\n';
  }
  return 0;
}

void dfs(const int h, const int w, const char kind)
{
  const int dh[] = {1, -1, 0, 0};
  const int dw[] = {0, 0, 1, -1};
  section[h][w] = '0';

  REP(d, 4){
    // 移動先生成
    int nh = h + dh[d];
    int nw = w + dw[d];
    // 境界値チェック
    if(nh >= 0 && nh < H && nw >= 0 && nw < W && section[nh][nw] != '0'){
      if(section[nh][nw] != kind)
        continue;
      dfs(nh, nw, kind);
    }
  }
  return;
}
