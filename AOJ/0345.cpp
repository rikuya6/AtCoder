#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int e[4];
  REP(i, 4)
    cin >> e[i];
  if((e[0] == e[1] && e[2] == e[3]) || (e[0] == e[3] && e[1] == e[2]))
    cout << "yes\n";
  else
    cout << "no\n";
  return 0;
}
