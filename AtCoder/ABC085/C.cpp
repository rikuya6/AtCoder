#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

void solve(const int n, const int y)
{
  for (int i = 0; i <= n; ++i) {
    for (int k = 0; k <= n; ++k) {
      if (i + k > n) break;
      int j = n - i - k;
      if (j < 0 || j > n) j = 0;
      if (i * 10000 + k * 5000 + j * 1000 == y) {
        cout << i << " " << k << " " << j << endl;
        return;
      }
    }
  }
  cout << "-1 -1 -1\n";
}

int main()
{
  int n, y;
  cin >> n >> y;
  solve(n, y);
}
