#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

long long x, y;

int solve()
{
  int cnt = 0;
  while (x <= y) {
    cnt++;
    x *= 2;
  }
  return cnt;
}

int main()
{
  cin >> x >> y;
  cout << solve() << endl;
}
