#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
#define REP(i,n) for(int i = 0; i < (int)(n); i++ )
#define FOR(it,c) for(__typeof((c).begin()) it = (c).begin(); it != (c).end(); ++it)
#define mp make_pair
static const int NUM = 8*7*6*5*4*3*2*1;
map<int, int> ans;
inline int get_at(const int code, const int pos)
{
  return (code >> ((7-pos)*3)) & 7;
}
inline int put_at(int code, const int pos, const int n)
{
  code = code & (~ (7 << (7-pos)*3));
  return (code | ((n & 7) << (7-pos)*3));
}
 
void solve()
{
  int goal = 0;
  for(int i = 0; i < 8; i++ ) goal = put_at(goal, i, i);
  int zeropos = 0;
  int numcnt = 1;
  vector<pair<int,int > > open[2]; open[0].clear(); open[0].push_back(mp(goal, zeropos));
  ans.clear(); ans[goal] = 1;
  for(int depth = 2; ; depth++) {
    int oldnumcnt = numcnt;
    int from = depth % 2, to = (from+1) % 2;
    open[to].clear();
#ifdef DEBUG
    cerr << "Depth=" << depth << endl;
#endif
    FOR(it, open[from]) {
      int state = it->first, zero = it->second;
#ifdef DEBUG
      REP(i,8) cerr << get_at(state,i) << ":" ;
      cerr << endl;
#endif
      static int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
      REP(i,4) {
        int x = (zero % 4) + dir[i][0], y = (zero / 4) + dir[i][1];
        if(x >= 0 && x < 4 && y >= 0 && y <= 1) {
          int nxt = y*4+x;
          int nxtnum = get_at(state, nxt);
          int nxtstate = put_at(state, nxt, 0);
          nxtstate = put_at(nxtstate, zero, nxtnum);
          if(ans[nxtstate] == 0) {
            ans[nxtstate] = depth;
            open[to].push_back(mp(nxtstate, nxt));
            ++numcnt;
          }
        }
      }
    }
    if(oldnumcnt == numcnt) return;
  }
}
int main(void)
{
  int data[8];
  solve();
  while(scanf("%d", &data[0]) != EOF) {
    int start = put_at(0, 0, data[0]);
    for(int i = 1; i < 8; i ++ ) {
      scanf("%d", &data[i]);
      start = put_at(start, i, data[i]);
    }
    cout << ans[start]-1 << endl;
  }
  return 0;
}
