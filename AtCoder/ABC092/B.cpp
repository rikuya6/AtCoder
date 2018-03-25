#include <iostream>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int eat_count(int a, int d)
{
  int cnt = 0;
  for(int i = 1; i <= d; i += a)
    ++cnt;
  // cout << cnt << endl;
  return cnt;
}

int main()
{
  int n, d, x;
  vector<int> a;
  cin >> n >> d >> x;
  REP(i, n) {
    int w;
    cin >> w;
    a.push_back(w);
  }
  int sum = 0;
  REP(i, n) {
    sum += eat_count(a[i], d);
  }
  cout << sum + x << endl;
}
