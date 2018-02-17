#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int n;
int f[100][10], p[100][11];

int main()
{
  cin >> n;
  REP(i, n)
    REP(k, 10)
      cin >> f[i][k];
  REP(i, n)
    REP(k, 11)
      cin >> p[i][k];

}
