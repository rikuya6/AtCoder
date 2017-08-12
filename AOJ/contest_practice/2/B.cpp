// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2013

#include <iostream>
#include <queue>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int n;
  while(cin >> n, n) {
    int h1, m1, s1, h2, m2, s2;
    priority_queue<int, vector<int>, greater<int> > in_train, out_train;
    REP(i, n) {
      scanf("%d:%d:%d%d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
      in_train.push(h1 * 3600 + m1 * 60 + s1);
      out_train.push(h2 * 3600 + m2 * 60 + s2);
    }
    int ans = 1, in_time, out_time;
    in_time = in_train.top(); in_train.pop();
    REP(i, n - 1) {
      in_time = in_train.top(); in_train.pop();
      out_time = out_train.top();
      if(in_time >= out_time) {
        out_train.pop();
      }else{
        ans++;
      }
      // cout << in_time << " " << out_time << endl;
    }
    cout << ans << endl;
  }
  return 0;
}
