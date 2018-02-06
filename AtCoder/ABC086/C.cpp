#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

typedef vector<int> VI;

bool check(VI t, VI x, VI y, int n)
{
  REP(i, n) {
    int ct = t[i + 1] - t[i];
    int cx = x[i + 1] - x[i];
    int cy = y[i + 1] - y[i];
    int c_abs = abs(cx) + abs(cy);
    if (ct < c_abs || (ct % 2 != c_abs % 2))
      return false;
  }
  return true;
}

int main()
{
  int n;
  vector<int> t{0}, x{0}, y{0};
  bool ans = true;
  cin >> n;
  REP(i, n) {
    int t1, x1, y1;
    cin >> t1 >> x1 >> y1;
    t.push_back(t1);
    x.push_back(x1);
    y.push_back(y1);
  }
  if (check(t, x, y, n))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
