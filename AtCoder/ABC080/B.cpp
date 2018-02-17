#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

bool solve(const int n)
{
  int t = n;
  int sum = 0;
  while (true) {
    sum += t % 10;
    t /= 10;
    if (t == 0)
      break;
  }
  return (n % sum) == 0;
}

int main()
{
  int n;
  cin >> n;
  solve(n) ? cout << "Yes\n" : cout << "No\n";
}
