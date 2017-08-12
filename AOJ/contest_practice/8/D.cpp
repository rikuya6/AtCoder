// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1156&lang=jp
// WA

#include <iostream>
#include <queue>
#include <vector>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

typedef pair<pair<int, int>, pair<int, int> > State; // cost, x,  y, d

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int INF = INT_MAX / 4;
int s[32][32], c[4];
int memo[32][32][4];
int h, w;

int dfs() {
  memo[0][0][1] = 0; // スタートは左向き
  priority_queue<State, vector<State>, greater<State> > queue;
  queue.push(make_pair(make_pair(0, 0), make_pair(0, 1)));
  while(!queue.empty()) {
    State cur = queue.top(); queue.pop();
    int cx = cur.first.second, cy = cur.second.first, cdir = cur.second.second;
    if(cx == w - 1 && cy == h - 1) {
      REP(z, 4) {
        REP(i, h) {
          REP(k, w) {
            cout << memo[i][k][z] << " ";
          }
          cout << endl;
        }
        cout << endl;
      }
      return cur.first.first;
    }
    REP(d, 4) {
      int ndir = (cdir + d) % 4;
      int nx = cx + dx[ndir];
      int ny = cy + dy[ndir];
      int ncost = cur.first.first;
      if(nx < 0 || nx > w || ny < 0 || ny >= h) continue;
      if(s[cy][cx] != ndir) {
        ncost += c[d];
      }
      if(memo[ny][nx][ndir] > ncost) {
        memo[ny][nx][ndir] = ncost;
        queue.push(make_pair(make_pair(ncost, nx), make_pair(ny, ndir)));
      }
    }
  }
  return -1;
}

int main()
{
  while(cin >> w >> h, w && h) {
    REP(i, 32) REP(k, 32) REP(l, 4) memo[i][k][l] = INF;
    REP(i, h) REP(k, w) cin >> s[i][k];
    REP(i, 4) cin >> c[i];
    cout << dfs() << endl;
    return 0;
  }
}
