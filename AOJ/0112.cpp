#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

long long solve(vector<int> &t)
{
  sort(t.begin(), t.end());
  long long t_sum = 0, ans = 0;
  for(auto it = t.begin(); it != t.end(); ++it) {
    ans += t_sum;
    t_sum += *it;
  }
  return ans;
}

int main()
{
  int n, work;
  while(cin >> n, n) {
    vector<int> t;
    REP(i, n) {
      cin >> work;
      t.push_back(work);
    }
    cout << solve(t) << '\n';
  }
  return 0;
}
