#include <iostream>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )
#define INF 1 << 29

int cost[100][100];
int V;

void warshall_floyd()
{
  REP(k, V)
    REP(i, V)
      REP(j, V)
        cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
}

int main()
{
  int m, s, g1, g2;
  while(cin >> V >> m >> s >> g1 >> g2, V) {
    s--; g1--; g2--;
    REP(i, V) {
      REP(k, V) {
        if(i == k)
          cost[i][k] = 0;
        else
          cost[i][k] = INF;
      }
    }
    int first, second, in_cost;
    REP(i, m) {
      cin >> first >> second >> in_cost;
      first--; second--;
      cost[first][second] = in_cost;
    }
    REP(i, V){
      REP(k, V)
        cout << cost[i][k] << " ";
      cout << endl;
    }
    warshall_floyd();
    cout << endl;
    REP(i, V){
      REP(k, V)
        cout << cost[i][k] << " ";
      cout << endl;
    }
    int min = INF;
    REP(i, V){
      min = std::min(min, cost[s][i] + cost[i][g1] + cost[i][g2]);
      // cout << cost[s][i] << " " << cost[i][g1] << " " << cost[i][g2] << endl;
    }
    // cout << endl;
    cout << min << endl;
  }
  return 0;
}
