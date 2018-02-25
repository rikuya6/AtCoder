#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int solve(const int n)
{
  int ret = 1;
  while (true) {
    if (ret * ret > n) {
      return (ret - 1) * (ret - 1);
    }
    ret++;
  }
}

int main()
{
  int n;
  cin >> n;
  cout << solve(n) << endl;
}
