// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2001

#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int x, y;
int amida[1001][202];

void move(){
  // cout << "amida" << amida[x + 1][y] << endl;
  if(amida[y][x - 1] == 1){
    x -= 2;
  }else if(amida[y][x + 1] == 1){
    x += 2;
  }
  y -= 1;
}

int main()
{
  int n, m, a;
  int max = 0;
  int larg;
  int data[1001][3];
  while(cin >> n >> m >> a, n || m || a){
    max = 0;
    REP(i, m){
      cin >> data[i][0] >> data[i][1] >> data[i][2];
      if(max < data[i][0])
        max = data[i][0];
    }

    REP(i, 1001){
      REP(k, 202){
        amida[i][k] = 0;
      }
    }

    REP(i, m){
      larg = data[i][1];
      if(data[i][2] > larg)
        larg = data[i][2];
      amida[data[i][0]][larg * 2 - 1] = 1;
    }

    /*
    //debug
    REP(i, (max + 1)){
      REP(k, (n * 2 + 1)){
        cout << amida[i][k] << " ";
      }
      cout << endl;
    }
    */

    x = a * 2;
    y = max;
    while(true){
      // cout << "b x:" << x << " y:" << y << endl;
      move();
      // cout << "a x:" << x << " y:" << y << endl;

      if(y < 1)
        break;
    }
    cout << (x / 2) << endl;
  }
}
