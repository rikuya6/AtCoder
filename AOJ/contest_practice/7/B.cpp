#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int maze[31][31];

int main()
{
  int w, h;
  while(cin >> w >> h, w || h){
    REP(i, 31) REP(k, 31) maze[i][k] = 0;
    for(int i = 0; i < h * 2 - 1; i++) {
      if(i % 2 == 0) {
        REP(k, w - 1) {
          int wall;
          cin >> wall;
          if(wall) {
            maze[i / 2][k] |= 1;     // 左のマスの右
            maze[i / 2][k + 1] |= wall; // 右のマスの左
          }
        }
      }else{
        REP(k, w) {
          int wall;
          cin >> wall;
          if(wall) {
            maze[i / 2][k] |= wall;     // 上のマスの下
            maze[i / 2 + 1][k] |= wall; // 下のマスの上
          }
        }
      }
    }
    cout << endl << endl;
    REP(i, h) {
      REP(k, w) {
        cout << maze[i][k];
      }
      cout << endl;
    }
    // return 0;
  }
}
