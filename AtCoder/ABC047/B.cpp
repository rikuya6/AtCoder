// 解けてない
#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int w, h, n;
bool map[101][101];

void draw(int x, int y, int a)
{
  switch(a) {
    case 1:
      for(int i = 0; i < h; i++)
        for(int k = 0; k < x; k++)
          map[i][k] = true;
      break;
    case 2:
      for(int i = w; i >= x; i--)
        for(int k = 0; k < h; k++)
          map[i][k] = true;
      break;
    case 3:
      for(int i = 0; i < w; i++)
        for(int k = 0; k < y; k++)
          map[i][k] = true;
      break;
    case 4:
      for(int i = h; i >= y; i--)
        for(int k = 0; k < w; k++)
          map[i][k] = true;
      break;
  }
}

int main(){
  cin >> w >> h >> n;
  REP(i, h)
    REP(k, w)
      map[i][k] = false;
  REP(i, n) {
    int x, y, a;
    cin >> x >> y >> a;
    draw(x, y, a);
    cout << endl;
    REP(i, h){
      REP(k, w)
        cout << map[i][k];
      cout << endl;
    }
  }
  int cnt = 0;
  REP(i, h)
    REP(k, w)
      if(!map[i][k]) cnt++;
  cout << cnt << endl;
}
