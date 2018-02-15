#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a + b == c + d)
    cout << "Balanced" << endl;
  else if (a + b > c + d)
    cout << "Left" << endl;
  else
    cout << "Right" << endl;
}
