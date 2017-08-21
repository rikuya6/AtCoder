#include <iostream>
#include <cmath>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int x, a, b;
  cin >> x >> a >> b;
  if (abs(x - a) < abs(x - b)) cout << "A" << endl;
  else cout << "B" << endl;
  return 0;
}
