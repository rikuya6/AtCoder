#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n, k, l[51];
  cin >> n >> k;
  REP(i, n) cin >> l[i];
  sort(l, l + n, greater<int>());
  int sum = 0;
  REP(i, k) sum += l[i];
  cout << sum << endl;
  return 0;
}
