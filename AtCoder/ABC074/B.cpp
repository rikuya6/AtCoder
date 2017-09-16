#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n, k;
  cin >> n >> k;
  int sum = 0;
  REP(i, n) {
    int x;
    cin >> x;
    sum += min(x * 2, (k - x) * 2); // 往復のため、* 2
    // cout << x * 2 << " " << (k - x) * 2 << endl;
  }
  cout << sum << endl;
  return 0;
}
