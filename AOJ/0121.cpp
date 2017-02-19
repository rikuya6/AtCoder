// TLE

#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)

int encode(const int data[])
{
  int e = 0;
  REP(i, 8)
    e |= data[i] << (3 * i);
  return e;
}

void decode(const int e, int d[])
{
  for(int i = 7; i >= 0; i--)
    d[i] = ((e >> (3 * i)) & 7);
  return;
}

void bit_debug(const int e)
{
  cout << "bit: ";
  REP(i, 10){
    cout << ((e >> (3 * i)) & 7) << " ";
  }
  cout << endl;
}



int solve(const int start)
{
  int end_str[] = {0, 1, 2, 3, 4, 5, 6, 7};
  int end = encode(end_str);
  queue<int> open, cnt_que;
  int closed[8*7*6*5*4*3*2];

  open.push(start);
  closed[start] = 1;
  cnt_que.push(0);
  while(! open.empty()){
    int state = open.front(); open.pop();
    int cnt = cnt_que.front(); cnt_que.pop();
    int data[8];
    int zeroX, zeroY;

    if(state == end) return cnt;

    decode(state, data);
    REP(i, 8){
      if(data[i] == 0){
        zeroX = i % 4;
        zeroY = i / 4;
        break;
      }
    }
    // cout << "x: " << zeroX << " y: " << zeroY << endl;

    int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
    int ndata[8], nstate;
    REP(d, 4){
      int nx = zeroX + dx[d];
      int ny = zeroY + dy[d];

      if(nx < 0 || nx > 7) continue;
      if(ny < 0 || ny > 1) continue;
      if(ny == 0 && nx > 3) continue;
      if(ny == 1 && nx < 0) continue;

      REP(i, 8)
        ndata[i] = data[i];
      // cout << "zy: " << zeroY << " zx: " << zeroX << endl;
      // cout << "ny: " << ny << " nx: " << nx << endl;
      // cout << ndata[zeroY * 4 + zeroX] <<  " " << ndata[ny * 4 + nx] << endl;
      swap(ndata[zeroY * 4 + zeroX], ndata[ny * 4 + nx]);
      nstate = encode(ndata);
      // cout << nstate << endl;
      if(closed[nstate] != 1){
        open.push(nstate);
        closed[nstate] = 1;
        // cout << "cnt: " << cnt << endl;
        cnt_que.push(cnt + 1);
      }
    }
  }
  return -1;
}

int main()
{
  ios::sync_with_stdio(false);

  int num, ans;
  int start[8];
  while(true){
    REP(i, 8){
      if(! (cin >> num))
        return 0;
      start[i] = num;
    }
    int e = encode(start);
    ans = solve(e);
    cout << ans << endl;
  }
  return 0;
}
