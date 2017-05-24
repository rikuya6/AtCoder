#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int group[] = {0, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};
  int x, y;
  cin >> x >> y;
  if(group[x] == group[y]) cout << "Yes" << endl;
  else cout << "No" << endl;
}
