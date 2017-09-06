#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  cin >> n;
  long long sum = 1;
  for (int i = 1; i <= n; ++i) {
    sum *= i;
  }
  cout << sum << endl;
  return 0;
}
