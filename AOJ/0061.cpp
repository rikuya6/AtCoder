#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int p, s;
  char work;
  vector<pair<int, pair<int, int>>> v;
  while (cin >> p >> work >> s, p || s) {
    v.push_back(make_pair(s, make_pair(p, 1)));
  }
  sort(v.begin(), v.end(), greater<pair<int, pair<int, int>>>());
  int size = v.size();
  for (int i = 1, k = 1; i < size; i++) {
    if (v[i - 1].first != v[i].first) {
      v[i].second.second = k + v[i - 1].second.second ;
      // k++;
    }else{
      v[i].second.second = v[i - 1].second.second ;
    }
  }
  // for (auto& e : v) {
  //   cout << e.first << " " << e.second.first << " " << e.second.second << endl;
  // }

  int n;
  while (cin >> n) {
    int size = v.size();
    for (int i = 0; i < size; ++i) {
      if (n == v[i].second.first) {
        cout << v[i].second.second << endl;
        break;
      }
    }
  }
  return 0;
}
