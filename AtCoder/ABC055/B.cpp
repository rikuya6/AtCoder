#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int n;
  cin >> n;
  long long sum = 1;
  for(int i = 1; i <= n; i++) {
    sum *= i;
    sum = sum % 1000000007;
  }
  cout << sum << endl;
}
