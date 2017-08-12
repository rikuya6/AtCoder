// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2019

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n, m;
  while(cin >> n >> m, n) {
    int d, p;
    vector< pair<int, int> > graph;
    REP(i, n) {
      cin >> d >> p;
      graph.push_back(make_pair(p, d));
    }
    sort(graph.begin(), graph.end(), std::greater< pair<int, int> >());
    int ans = 0;
    for(auto it : graph) {
      while(it.second > 0 && m > 0) {
        it.second--;
        m--;
      }
      if(m <= 0){
        ans += it.first * it.second;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
