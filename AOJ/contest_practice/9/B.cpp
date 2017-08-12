// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1193&lang=jp

#include <iostream>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int H;

void drop(int map[][5])
{
  for(int i = H; i > 0; i--) {
    for(int pos = 0; pos < 5; pos++) {
      if(map[i][pos] == -1) {
        for(int k = i; k > 0; k--) {
          map[k][pos] = map[k - 1][pos];
          map[k - 1][pos] = -1;
        }
      }
    }
  }
}

int erase(int map[][5])
{
  int point = 0;
  REP(i, H) {
    for(int pos = 0; pos < 5;) {
      int number = map[i][pos], cnt = 1;
      // cout << "number: " << number << endl;
      // cout << "pos: " << pos << endl;
      // cout << "cnt: " << cnt << endl;
      // cout << "p: " << point << endl;
      if(number == -1) break;
      for(int k = pos + 1; k < 5; k++) {
        // cout << "map num: " << map[i][k] << " " << number << endl;
        if(map[i][k] == number) {
          cnt++;
        }else{
          break;
        }
      }
      if(cnt >= 3) {
        // cout << "get_point: " << number * cnt << endl;
        point += number * cnt;
        for(int e = pos; e < pos + cnt; e++) map[i][e] = -1;
        drop(map);
      }
      pos += cnt;
    }
  }
  // cout << "point: " << point << endl << endl;
  return point;
}



int main()
{
  while (cin >> H, H) {
    int map[H][5];
    int score = 0, ans = 0;
    REP(i, H) REP(k, 5) cin >> map[i][k];
    while(true) {
      score = erase(map);
      ans += score;
      if(score == 0) break;
      // REP(a, H) {
      //   REP(b, 5) cout << map[a][b];
      //   cout << endl;
      // }
      // cout << endl;
    }
    cout << ans << endl;
  }
}
