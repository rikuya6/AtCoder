#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)


int n, max_i = -1;
vector<int> a;

int main()
{
  cin >> n;
  REP(i, n) {
    int w;
    cin >> w;
    a.push_back(w);
  }
  sort(a.begin(), a.end());
  max_i = *(a.end() - 1);
  int mid_d = 1 << 30;
  int mid = 1 << 30;
  REP(i, n) {
    if (mid_d >= abs(a[i] - max_i / 2) && a[i] != max_i) {
      mid_d = abs(a[i] - max_i / 2);
      mid = a[i];
    }
  }
  cout << max_i << " " << mid << endl;
}
