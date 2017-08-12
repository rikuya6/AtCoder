// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1153&lang=jp

#include <iostream>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n, m;
  while(cin >> n >> m, n && m) {
    int ncard[n], nsum = 0;
    int mcard[m], msum = 0;
    // int min_sum = INF;
    REP(i, n) {
      cin >> ncard[i];
      nsum += ncard[i];
    }
    REP(i, m) {
      cin >> mcard[i];
      msum += mcard[i];
    }
    sort(ncard, ncard + n);
    sort(mcard, mcard + m);
    int new_nsum, new_msum;
    bool check = false;
    REP(i, n) {
      if(check) break;
      REP(k, m) {
        new_nsum = nsum - ncard[i] + mcard[k];
        new_msum = msum - mcard[k] + ncard[i];
        if(new_nsum == new_msum) {
          cout << ncard[i] << " " << mcard[k] << endl;
          check = true;
          break;
        }
      }
    }
    if(!check) cout << -1 << endl;
  }
}
