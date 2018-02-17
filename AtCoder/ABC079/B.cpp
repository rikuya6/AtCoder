#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

long long number[87];



long long solve(const long long n)
{
  number[0] = 2LL;
  number[1] = 1LL;
  for (int i = 2; i <= n ; i++)
    number[i] = number[i - 2] + number[i - 1];
  return number[n];
}

int main()
{
  int n;
  cin >> n;
  cout << solve(n) << endl;
}
