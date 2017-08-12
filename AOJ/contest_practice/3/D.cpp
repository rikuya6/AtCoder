// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1138&lang=jp

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define INF (1 << 29)

struct E { int to, cost; };

struct STATE {
  int node, ticket_state;
  double time;
};

bool operator < (STATE first, STATE second) {
  return first.time > second.time;
}

int main()
{
  int n, m, p, a, b;
  while(cin >> n >> m >> p >> a  >> b, n) {
    a--, b--;
    int tickets[n];
    vector<E> edge[30];
    REP(i, n)
      cin >> tickets[i];
    REP(i, p) {
      E e;
      int first_node, second_node;
      cin >> first_node >> second_node >> e.cost;
      first_node--; second_node--;
      e.to = second_node;
      edge[first_node].push_back(e);
      e.to = first_node;
      edge[second_node].push_back(e);
    }
    priority_queue<STATE> que;
    STATE e = {a, 0, 0};
    que.push(e);
    double ans = INF;
    bool used[30][256];
    REP(i, 30)
      REP(k, 256)
        used[i][k] = false;
    while(! que.empty()) {
      STATE state = que.top(); que.pop();
      if(state.node == b) {
        ans = state.time;
        break;
      }
      if(used[state.node][state.ticket_state]) continue;
      used[state.node][state.ticket_state] = true;
      REP(i, edge[state.node].size()) {
        REP(k, n) {
          if(((state.ticket_state >> k) & 1) == 0) { // チケットを使っていなかったら
            STATE nstate = {edge[state.node][i].to, state.ticket_state | 1 << k, state.time + (double)edge[state.node][i].cost / tickets[k]};
            que.push(nstate);
          }
        }
      }
    }
    if(ans != INF)
      cout << ans << endl;
    else
      cout << "Impossible" << endl;
  }
  return 0;
}
