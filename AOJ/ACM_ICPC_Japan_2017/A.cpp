#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)

int main()
{
  int n, m;
  while(cin >> n >> m) {
    if(n == 0 && m == 0) break;
    int a[n];
    vector<int> data;
    REP(i, n) cin >> a[i];
    REP(i, n) {
      for(int k = 0; k < n; k++) {
        if(a[i] + a[k] <= m && i != k)
          data.push_back(a[i] + a[k]);
      }
    }
    if(data.size() > 0) {
      sort(data.begin(), data.end(), greater<int>());
      cout << data[0] << endl;
    }
    else cout << "NONE" << endl;
  }
}
