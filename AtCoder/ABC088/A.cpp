#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

bool solve(const int n, const int a)
{
  int value = n;
  int c  = (n / 500);
  value -=  c * 500;
  return value <= a;
}


int main()
{
  int n, a;
  cin >> n >> a;
  solve(n, a) ? cout << "Yes\n" : cout << "No\n"; 
}
