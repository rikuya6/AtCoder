#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  while (cin >> n, n) {
    vector<pair<double, int> > data;
    int p;
    double h, w;
    REP(i, n) {
      cin >> p >> h >> w;
      double bmi = w / ((h / 100.0) * (h / 100.0));
      data.push_back(make_pair(abs(22.0 - bmi), p));
    }
    sort(data.begin(), data.end());
    // for (auto& e : data) {
    //   cout << e.first << " " << e.second << endl;
    // }
    // cout << endl;
    cout << data[0].second << endl;
  }
  return 0;
}
