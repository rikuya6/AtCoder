#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int n, m, x;
vector<int> cost_t(101, 0);

void make_cost_table()
{
  int a;
  REP(i, m) {
    cin >> a;
    cost_t[a] = 1;
  }
}

int get_left_cost()
{
  int cost = 0;
  for (int i = x; i >= 0; --i)
    cost += cost_t[i];
  return cost;
}

int get_right_cost()
{
  int cost = 0;
  for (int i = x; i <= n; ++i)
    cost += cost_t[i];
  return cost;
}

int main()
{
  cin >> n >> m >> x;
  make_cost_table();
  int right_cost = get_right_cost();
  int left_cost = get_left_cost();
  cout << min(right_cost, left_cost) << endl;
}
