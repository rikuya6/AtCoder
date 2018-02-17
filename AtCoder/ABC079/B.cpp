#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

long long memo[87];

long long solve(const long long n)
{
  if (n == 0)
    return 2;
  if (n == 1)
    return 1;
  if (n >= 2)
    if (memo[n] > 0)
      return memo[n];
    else
      return memo[n] = solve(n - 1) + solve(n - 2);
}

int main()
{
  int n;
  cin >> n;
  cout << solve(n) << endl;
}
