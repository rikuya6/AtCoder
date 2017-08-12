// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2149

#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define INF (1 << 29)

int main()
{
  int n, a, b, c, x;
  while(cin >> n >> a >> b >> c >> x, n || a || b || c || x){
    int cnt = 0;
    int ind = 0;
    int data[150] = {0};

    REP(i, n)
      cin >> data[i];

    while(cnt <= 10000){
      if(x == data[ind]){
        ind++;
      }
      x = (a * x + b) % c;
      if(ind >= n){
        cout << cnt << endl;
        break;
      }
      cnt++;
    }
    if(cnt > 10000) cout << -1 << endl;
  }
}
