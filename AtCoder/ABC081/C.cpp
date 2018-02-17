#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n, k;
  unordered_map<int, int> mp;
  cin >> n >> k;
  REP(i, n) {
    int work;
    cin >> work;
    mp[work]++;
  }
  vector<pair<int, int>> v;
  for (auto e : mp)
    v.push_back(make_pair(e.second, e.first));
  sort(v.begin(), v.end(), greater<pair<int, int>>());
  int t = 0;
  REP (i, v.size()) {
    if (i == k) break;
    t += v[i].first;
  }
  cout << n - t << endl;
}
