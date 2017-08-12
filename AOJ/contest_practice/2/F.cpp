// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2021

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define INF (1 << 29)

struct edge { int to, cost; };
typedef pair<pair<int, int>, int> P; // 最短距離, 頂点, 時間

int n, m, l, k, a, h;
bool flag_cold_towns[101];
vector<edge> G[101];
int d[101][101]; // 最短距離

void dijkstra(int s)
{
  priority_queue<P, vector<P>, greater<P> > que;
  d[s][m] = 0;
  que.push(make_pair(make_pair(0, s), m));
  while(!que.empty()) {
    P p = que.top(); que.pop();
    int v = p.first.second;
    int time = p.second;
    if(d[v][time] < p.first.first) continue;
    if(flag_cold_towns[v]) {
      REP(i, G[v].size()) {
        for(int k = time; k < m + 1; k++) {
          edge e = G[v][i];
          if(k - e.cost >= 0 && d[e.to][k - e.cost] > k + d[v][time] + e.cost - time) {
            d[e.to][k - e.cost] = k + d[v][time] + e.cost - time;
            que.push(make_pair(make_pair(d[e.to][k - e.cost], e.to), k - e.cost));
          }
        }
      }
    }else{
      REP(i, G[v].size()) {
        edge e = G[v][i];
        if(time - e.cost >= 0 && d[e.to][time - e.cost] > d[v][time] + e.cost) {
          d[e.to][time - e.cost] = d[v][time] + e.cost;
          que.push(make_pair(make_pair(d[e.to][time - e.cost], e.to), time - e.cost));
        }
      }
    }
  }
}

int main()
{
  while(cin >> n >> m >> l >> k >> a >> h, n) {
    REP(i, 101) {
      flag_cold_towns[i] = false;
      G[i].clear();
      REP(k, 101)
        d[i][k] = INF;
    }
    REP(i, l) {
      int number;
      cin >> number;
      flag_cold_towns[number] = true;
    }
    REP(i, k) {
      edge e;
      int first_node, second_node;
      cin >> first_node >> second_node >> e.cost;
      e.to = second_node;
      G[first_node].push_back(e);
      e.to = first_node;
      G[second_node].push_back(e);
    }
    dijkstra(a);
    int ans = INF;
    REP(i, m + 1)
      ans = min(ans, d[h][i]);
     if(ans != INF)
      cout << ans << endl;
     else
      cout << "Help!" << endl;
  }
}
