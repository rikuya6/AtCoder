#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  long long n, k;
  cin >> n >> k;
  vector<pair<long long, long long> > v;
  REP(i, n) {
    long long a, b;
    cin >> a >> b;
    v.push_back(make_pair(a, b));
  }
  sort(v.begin(), v.end());
  int cnt = 0;
  while(k > 0) {
    k -= v[cnt].second;
    cnt++;
  }
  cout << v[cnt - 1].first << endl;
}
