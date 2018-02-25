#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int solve(const int n, const int k)
{
  int ret = 1;
  REP(i, n)
   ret =  min(ret * 2, ret + k);
  return ret;
}

int main()
{
  int n, k;
  cin >> n >> k;
  cout << solve(n, k) << endl;
}
