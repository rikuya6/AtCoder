#include <iostream>
#include <map>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int n;
map<int, int> m;

int solve()
{
  int ans = 0;
  for (auto e : m) {
    int k = e.first;
    int v = e.second;
    if (v < k)
      ans += v;
    else
      ans += v - k;
  }
  return ans;
}

int main()
{
  cin >> n;
  int a;
  REP(i, n) {
    cin >> a;
    m[a]++;
  }
  cout << solve() << endl;
}
