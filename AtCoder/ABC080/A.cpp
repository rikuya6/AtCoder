#include <iostream>
#include <cmath>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n, a, b, p1, p2;
  cin >> n >> a >> b;
  p1 = a * n;
  p2 = b;
  cout << min(p1, p2) << endl;
}
