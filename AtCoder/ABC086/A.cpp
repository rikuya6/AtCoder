#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int a, b;
  cin >> a >> b;
  (a * b % 2 == 0) ? cout << "Even\n" : cout << "Odd\n";
}
