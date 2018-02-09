#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int solve(int d[100], const int n)
{
  int counter = 1;
  sort(d, d + n, greater<int>());
  REP(i, n - 1) {
    if (d[i] > d[i + 1]) counter++;
  }
  return counter;
}

int main()
{
  int n;
  int d[100];
  cin >> n;
  REP(i, n) cin >> d[i];
  cout << solve(d, n) << endl;
}
